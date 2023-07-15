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
//time complexity=O(mn)
//space complexity=O(max(m,n))
class Solution 
{
public:
    bool isSubtree(TreeNode* root, TreeNode* subroot)
    {
       if(root == NULL)
       {
           return false;
       }
       if(issame(root,subroot))
       {
           return true;
       }
       return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
    private :
    bool issame(TreeNode* root, TreeNode* subroot) 
    {
        if(root == NULL && subroot == NULL)
        {
            return true;
        }
        if(root == NULL || subroot == NULL)
        {
            return false;
        }
        if(root ->val != subroot ->val)
        {
            return false;
        }
        
        return issame(root->left,subroot->left) && issame(root->right,subroot->right);
    }
};

