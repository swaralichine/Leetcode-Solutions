/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Time Complexity=O(n)
//Space Complexity=O(n)
class Solution 
{
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)     
    {
        if(root==nullptr)
        {
            return root;
        }
        if(p->val < root->val && q->val < root->val)
        {
            //both nodes are in the left subtree
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(p->val > root->val && q->val > root->val)
        {
            //both nodes are in the right subtree
            return lowestCommonAncestor(root->right,p,q);
        }
        else
        {
            // We have found the split point, i.e. the LCA node.
            return root;
        }
    }
};
