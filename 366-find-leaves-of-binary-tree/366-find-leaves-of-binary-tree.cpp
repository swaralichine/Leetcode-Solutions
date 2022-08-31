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
//Time complexity=O(nlogn)
//Space Complexity=O(n)
class Solution 
{
public:
    int dfs(TreeNode* root,vector<vector<int>> &res)
    {
        if(!root)
        {
            return -1;
        }
        //finding the current height of the tree
        int level = 1+max(dfs(root->left,res), dfs(root->right,res));
        if(level == res.size())
        {
            res.push_back(vector<int>());  //pushing a vector
        }
        res[level].push_back(root->val);
        root->left=root->right = NULL;   //reached the end
        return level;
    }
    vector<vector<int>> findLeaves(TreeNode* root) 
    {
        vector<vector<int>> ans;
        dfs(root,ans);
        return ans;
    }
};