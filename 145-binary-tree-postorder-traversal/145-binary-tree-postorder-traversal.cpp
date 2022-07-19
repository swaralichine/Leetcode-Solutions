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
class Solution 
{
public:
    void postorder(vector<int> &ans,TreeNode* root)
    {
      if(root->left == NULL && root->right == NULL)
      {
          ans.push_back(root->val);
          return;
      }
        //go left
        if(root->left != NULL)
        {
            postorder(ans,root->left);
        }
        //go right
        if(root->right != NULL)
        {
            postorder(ans,root->right);
        }
        //take node
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        if(root == NULL)
        {
            return ans;
        }
        postorder(ans,root);
        return ans;
    }
};




