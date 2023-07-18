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
//time complexity = O(n)
//space complexity = O(n) worst case
class Solution 
{
public:
    int sum_of_left_leaves=0;
    void solve(TreeNode* root,int& sum_of_left_leaves)
    {
        if(root==NULL)
        {
            return;
        }
        //checking if the node is the left node and then again checking whether its left and right nodes are null for it to be a leaf
        if(root->left!=NULL && root->left->left==NULL && root->left->right==NULL)
        {
            sum_of_left_leaves+=root->left->val;
        }
        //doing a preorder traversal
        solve(root->left,sum_of_left_leaves);
        solve(root->right,sum_of_left_leaves);
        
    }
    int sumOfLeftLeaves(TreeNode* root)
    {
        solve(root,sum_of_left_leaves);
        return sum_of_left_leaves;
    }
};




