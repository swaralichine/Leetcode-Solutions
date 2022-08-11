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
//Time Complexity=O(n)
//Space Complexity=O(n)
//Inorder traversal gives us the desired answer
class Solution
{
public:
     TreeNode* current;
    void inorder(TreeNode* root)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left);
        root->left=NULL;
        current->right=root;
        current=current->right;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) 
    {
        current=new TreeNode();
        TreeNode* ans=current;
        inorder(root);
        return ans->right;
    }
};
