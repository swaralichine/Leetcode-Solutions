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
//Time complexity=O(m) (m=minimum nodes need to be traversed)
//Space Complexity=O(m) (The depth of recursion)
class Solution 
{
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
    {
        //if the first tree is null,return the second one
        if(root1==NULL)
        {
            return root2;
        }
        //if the second tree is null,return the first one
        if(root2==NULL)
        {
            return root1;
        }
        root1->val = root1->val + root2->val;
        
        root1->left=mergeTrees(root1->left,root2->left);
        root1->right=mergeTrees(root1->right,root2->right);
        
        return root1;
    }
};

