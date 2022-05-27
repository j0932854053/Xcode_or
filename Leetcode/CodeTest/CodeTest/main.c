//
//  main.c
//  CodeTest
//
//  Created by 龔星宇 on 2022/4/15.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include <time.h>

int main(int argc, char** argv) {
    int a = 10;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    printf("*ptr1:%d\n",*ptr1);
    printf("**ptr2:%d\n",**ptr2);
    
    
    printf("\n");
}

