//
//  main.c
//  Quick_Sort
//
//  Created by 龔星宇 on 2022/5/31.
//

void quick_sort(int arr[], int left, int right) {
    
    if(left < right) {
        int pivot = left;
        int i = left;
        int j = right;
        while (i < j) {
            while(arr[i] <= arr[pivot] && i < right)
                i++;
            while(arr[pivot]< arr[j] )
                j--;
            if(i < j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp2 = arr[j];
        arr[j] = arr[pivot];
        arr[pivot] = temp2;
        
       
        quick_sort(arr, pivot, j - 1);
        quick_sort(arr, j + 1, right);
    }
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    /*//隨機產生陣列元素
    srand((unsigned int)time(NULL));
    int list[10] = {0};
    int min = 1;
    int max = 20;
    printf("list origin : ");
    for (int i = 0; i<10; i++) {
        list[i] = rand() % (max - min + 1) + min;
        printf("%d ",list[i]);
    }
    printf("\n");
    quick_sort(list, 0, 9);
    printf("list sort   : ");
    
    for (int i = 0; i<10; i++) {
        printf("%d ",list[i]);
    }
    printf("\n");
    
    
    printf("\n");
    return 0;
     
     */
    
    int arr1[] ={3,1,5,2,5,3,3};// {3,2,1,7,6,5,9,8,7};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    printf("arr1 origin : ");
    for (int i = 0; i<n; i++) {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    quick_sort(arr1, 0, n-1);
    printf("arr1 sort   : ");
    
    for (int i = 0; i<n; i++) {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    
    
    printf("\n");
    return 0;
}
