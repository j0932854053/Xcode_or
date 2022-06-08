//
//  main.c
//  Same_Tree
//
//  Created by 龔星宇 on 2022/6/9.
//

#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};



bool isSameTree(struct TreeNode* p, struct TreeNode* q){

    if (p==NULL && q==NULL) {
        return true;
        
    }else if (p==NULL || q==NULL){
        return false;
    }
    
    if (p->val!=q->val) {
        return false;
    }
    
    
    
    return isSameTree(p->left, q->left)&&isSameTree(p->right, q->right);
}

int main(int argc, const char * argv[]) {
    int p[] = {1,2,3};
    int q[] = {1,2,3};
    
    
    printf("\n");
    return 0;
}
