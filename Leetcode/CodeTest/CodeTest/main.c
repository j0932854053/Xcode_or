//
//  main.c
//  CodeTest
//
//  Created by 龔星宇 on 2022/4/15.
//

#include <stdio.h>
#include <stdlib.h>

 
int main(int argc, const char * argv[]) {
    int i = 5;
    int count = 0;
    int result = i;
    while (result) {
        //test = (result)&0x00000001;
        count = count + (result&0x00000001);
        printf("%d ",result);
        printf("%d \n",count);
        
        result = result>>1;
        
    }
    printf("%d \n",count);
    
    
    printf("\n");
    
    return 0;
}
