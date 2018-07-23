/*#include <malloc.h>
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};
*/
//访问了空指针，不知道为什么
struct TreeNode* mergeTrees(struct TreeNode* t1, struct TreeNode* t2) {
    struct TreeNode *t = (struct TreeNode*)malloc(sizeof(struct TreeNode) );
    t->val = 0;
    t->left = NULL;
    t->right = NULL;
    if(!t1 && !t2)   //都为假
        return NULL;

    else {
        if(t1 && t2) {   //都为真
            t->val = t1->val + t2->val;
        }

        else if(t1 != NULL && t2 ==NULL) {   //一真一假
            t->val = t1->val;
        }

        else if(t1 == NULL && t2 != NULL) {
            t->val = t2->val;
        }            
    }
    
     t->left = mergeTrees(t1->left, t2->left);
     t->right = mergeTrees(t1->right, t2->right);
     return t; 
}