/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
//Recursive approach
//Time Complexity = O(n)
//Space Complexity = O(n)
class Solution 
{
public:
    bool isBalanced(TreeNode *root)
    {
        return dfsheight(root) != -1;
    }
    //we are returning -1 as soon the height difference between the left and right subtrees is greater than 1. In that way we need not travel the entire left and right subtrees.
    int dfsheight(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        //check if left subtree is balanced
        int left_height = dfsheight(root->left);
        if(left_height == -1)
        {
            return -1;
        }
        
        //check if right subtree is balanced
        int right_height = dfsheight(root->right);
        if(right_height == -1)
        {
            return -1;
        }
        //check for the difference in right
        if(abs(left_height-right_height)>1)
        {
            return -1;
        }
        return 1+max(left_height,right_height);
    }
};
