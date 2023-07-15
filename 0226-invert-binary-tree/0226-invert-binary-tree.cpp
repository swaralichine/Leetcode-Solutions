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
//recursive approach
class Solution
{
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root == NULL)
        {
            return NULL;
        }
           
        TreeNode *left = invertTree(root->left); // Getting Left Side of the Tree
        TreeNode *right = invertTree(root->right); // Getting Right Side of the Tree
        root->left = right; // putting Right Side to Left Side of the Tree
        root->right = left; // putting Left Side to Right Side of the Tree
        return root;
    }
};
