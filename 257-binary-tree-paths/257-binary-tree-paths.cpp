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
//using recursion
//time complexity=O(n)
//space complexity=O(n)
class Solution
{
public:
    void dfs(TreeNode* root,string str,vector<string> &ans)
    {
        if(!root->left && !root->right)
        {
            ans.push_back(str);
            return;
        }
        //travelling the left subtree
        if(root->left)
        {
            dfs(root->left,str + "->" + to_string(root->left->val),ans);
        }
        //travelling the right subtree
        if(root->right)
        {
            dfs(root->right,str + "->" + to_string(root->right->val),ans);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        //declaring a vector to store the answer
        vector<string> ans;   //base case
        if(root == NULL)
        {
            return ans;
        }
        dfs(root,to_string(root->val),ans);
        return ans;
    }
};