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
int* preorderTraversal(struct TreeNode* root, int* returnSize){

    int* result = (int*)malloc(sizeof(int) * 1000);
    *returnSize = 0;
    
    void traverse(struct TreeNode* node){
        if(node == NULL) return;
        result[(*returnSize)++] = node->val;
        traverse(node->left);
        traverse(node->right);
    }
    
    traverse(root);
    return result;
}
