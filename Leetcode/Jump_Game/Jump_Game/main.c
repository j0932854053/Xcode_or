//
//  main.c
//  Jump_Game
//
//  Created by 龔星宇 on 2022/6/11.
//

#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize){

    int index = 0;
    
    if(numsSize==1) {
        return true;
    }
    
    
    if(nums[0]==0 && (numsSize==1)) {
        return true;
        
    }

    
    while (index<numsSize-1) {
        if (nums[index]==0 ) {
            return false;
        }
        index = nums[index]+index;
        if (index>=numsSize-1) {
            return true;
        }
    }
    
    
    
    return 0;
}



int main(int argc, const char * argv[]) {
    
    
    
    
    
    printf("\n");
    return 0;
}
