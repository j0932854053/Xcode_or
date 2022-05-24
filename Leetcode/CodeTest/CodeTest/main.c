//
//  main.c
//  CodeTest
//
//  Created by 龔星宇 on 2022/4/15.
//

#include <stdio.h>


int main() {
    int a[]={6,7,8,9,10};
    int *p=a;
    *(p++)+=123;
    printf("*(p++)+=123=%d\n",*p);
    *(++p)+=123;
    printf("*(++p)+=123=%d\n",*p);
}
