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
//Time complexity= O(m+n)
//Space Complexity=O(m+n)
//We follow inorder traversal : left->root->right
class Solution
{
public:
    void preorder(TreeNode* root, vector<int>&v)
    {
        if(root==NULL)
        {
            return;
        }
        v.push_back(root->val);
        preorder(root->left,v);
        preorder(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) 
    {
      //declare vector to store the elements
        vector<int> ans;
        preorder(root1,ans);
        preorder(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

