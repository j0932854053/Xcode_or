//
//  main.c
//  CodeTest
//
//  Created by 龔星宇 on 2022/4/15.
//
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int cnt;
    for(cnt = 5 ; cnt-- ; ++a);
    for(cnt = 5 ; --cnt ; b++);
    for(cnt = 5 ; --cnt>0 ; ++c);
    for(cnt = 5 ; cnt-->0 ; d++);
    printf("%d",a*b*c*d);
    return 0;
    // a = 5 , b = 4 , c = 4 , d = 5
    // 400
}
