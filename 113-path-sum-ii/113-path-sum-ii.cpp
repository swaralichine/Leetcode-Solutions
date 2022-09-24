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
    void solve(TreeNode* root, int targetSum, vector<int> ans1, vector<vector<int>> &ans)
    {
        if(root == NULL)
        {
            return;
        }
        ans1.push_back(root->val);
        targetSum=targetSum-root->val;
        
        //if the target is matched and reached the roots
        if(targetSum == 0 && root->left == NULL && root->right == NULL)
        {
            ans.push_back(ans1);
            return;
        }
        //travel left and right subtrees
        solve(root->left,targetSum,ans1,ans);
        solve(root->right,targetSum,ans1,ans);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) 
    {
        vector<vector<int>> ans;   //main ans vector
        vector<int> ans1;
        solve(root,targetSum,ans1,ans);
        return ans;
    }
};