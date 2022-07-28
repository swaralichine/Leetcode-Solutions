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
//Time Complexity = O(n)
//Space Compexity = O(n)
//Using postorder traversal
class Solution 
{
public:
    int sum=0;
    void postorder(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        postorder(root->right);
        sum=sum+root->val;
        root->val=sum;
        postorder(root->left);
    }
    TreeNode* convertBST(TreeNode* root) 
    {
       postorder(root);
       return root;
    }
};
