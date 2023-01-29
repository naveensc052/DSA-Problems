/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*) malloc(sizeof(int) * 1000);
    *returnSize = 0;
    struct TreeNode** stack = (struct TreeNode**) malloc(sizeof(struct TreeNode*) * 1000); 
    int top = -1;
    struct TreeNode* p = root;
    while (p != NULL || top != -1) { 
        while (p != NULL) { 
            result[(*returnSize)++] = p->val; 
            stack[++top] = p;
            p = p->left;
        }
        p = stack[top--];
        p = p->right; 
    }
    free(stack);
    return result; 
}
