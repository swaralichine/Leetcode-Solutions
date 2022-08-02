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
    //declaring a global ans vector
    vector<int> ans;
    void solve(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        ans.push_back(root->val);
        solve(root->left);
        solve(root->right);
    }
    int getMinimumDifference(TreeNode* root) 
    {
        solve(root);
        int mini=INT_MAX;
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++)
        {
            mini=min(mini,ans[i]-ans[i-1]);
        }
        return mini;
    }
};
