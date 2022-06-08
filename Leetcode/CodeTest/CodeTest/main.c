//
//  main.c
//  CodeTest
//
//  Created by 龔星宇 on 2022/4/15.
//

#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int ia = ((int **)a)[0][1];
    int ib = ((int **)b)[0][1];
    if ((ia - ib)==0) {
        return (((int **)a)[0][0]-((int **)b)[0][0]);
    }
    return (ia - ib);
}

int eraseOverlapIntervals(int** intervals, int intervalsSize, int* intervalsColSize){
    int count = 0;
    
    
    qsort(intervals, intervalsSize, sizeof(intervals[0]), cmp);
    //int end = intervals[0][1];
    int end = intervals[0][0];
    for (int i = 0; i<intervalsSize; i++) {
        if (end<=intervals[i][0]) {
            end = intervals[i][1];
        }
        else{
            count++;
        }
    }
    



    return count;
}




 
int main(int argc, const char * argv[]) {
    
    
    int arr[][2] ={{1,2},{2,3},{3,4},{1,3}};
    int* ptr[4];
    ptr[0] = &arr[0][0];
    ptr[1] = &arr[1][0];
    ptr[2] = &arr[2][0];
    ptr[3] = &arr[3][0];
    
    int ans;
    int returnsize_temp = 0;
    
    
    ans = eraseOverlapIntervals(ptr, 4, &returnsize_temp);
    
    
    
    printf("\n");
    printf("ans  = %d",ans);
    
    
    printf("\n");
    
    
    return 0;
}
