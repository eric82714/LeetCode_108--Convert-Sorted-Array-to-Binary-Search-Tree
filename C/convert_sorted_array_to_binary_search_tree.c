/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* convert(int* nums, int left, int right) {
    if(left > right) return NULL;
        
    int mid = (left + right) / 2;
    struct TreeNode* root = malloc(sizeof(struct TreeNode));
    root->val = *(nums+mid);
    root->left = convert(nums, left, mid-1);
    root->right = convert(nums, mid+1, right);
        
    return root;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    return convert(nums, 0, numsSize-1);
}
