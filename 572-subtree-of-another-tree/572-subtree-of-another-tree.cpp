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
    // This code is for two check if two Trees have same structure and values also
    bool sametrees(TreeNode* root, TreeNode* subroot)
    {
      if(!root)
      {
          return subroot==NULL;
      }
      if(!subroot)
      {
          return root==NULL;
      }
      if(root->val == subroot->val)
      {
          return sametrees(root->left, subroot->left) && sametrees(root->right, subroot->right);
      }
        return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subroot) 
    {
        // If root is NULL check if Subroot is also NULL or not
        if(!root)
        {
            return subroot==NULL;
        }
        // If You have found same value of root and subroot 
        // Check if they have same possible structure and values or not
        if(root->val == subroot->val)
        {
            if(sametrees(root,subroot))
            {
                return true;
            }
        }
        //Else Check for SubTree in right and left Part
        return isSubtree(root->left,subroot) || isSubtree(root->right,subroot);
    }
};