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
//Using DFS
class Solution
{
public:
    vector<int> ans;
    void solve(TreeNode* root,vector<int>& ans)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left == NULL && root->right != NULL)
        {
            ans.push_back(root->right->val);
        }
        if(root->left != NULL && root->right == NULL)
        {
            ans.push_back(root->left->val);
        }
        //traverse both the sides
        solve(root->left,ans);
        solve(root->right,ans);
    }
    vector<int> getLonelyNodes(TreeNode* root) 
    {
        solve(root,ans);
        return ans;
    }
};




