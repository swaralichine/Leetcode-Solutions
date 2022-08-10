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
//Time complexity=O(n)
//Space Compexity=O(n)
class Solution 
{
public:
    void dfsleft(TreeNode* node,vector<int>&ans)
    {
        if(node==nullptr || (node->left ==nullptr && node->right ==nullptr))
        {
            return;
        }
        ans.push_back(node->val);
        //we are traversing all the nodes of the left subtree that are not leaves
        if(node->left!=nullptr)
        {
            dfsleft(node->left,ans);
        }
        else
        {
            dfsleft(node->right,ans);
        }
    }
    void dfsright(TreeNode* node,vector<int>&ans)
    {
        if(node==nullptr || (node->left == nullptr && node->right ==nullptr))
        {
            return;
        }
        //we are traversing all the nodes of the right subtree that are not leaves
        if(node->right!=nullptr)
        {
            dfsright(node->right,ans);
        }
        else
        {
            dfsright(node->left,ans);
        }
        ans.push_back(node->val);
    }
    void dfsleaves(TreeNode* node,vector<int>&ans)
    {
        if(node==nullptr)
        {
            return;
        }
        if(node->left==nullptr && node->right==nullptr)
        {
            ans.push_back(node->val);
            return;
        }
        dfsleaves(node->left,ans);
        dfsleaves(node->right,ans);
    }
    vector<int> boundaryOfBinaryTree(TreeNode* root) 
    {
       vector<int> ans;
       ans.push_back(root->val);
       dfsleft(root->left,ans);
       dfsleaves(root->left,ans);
       dfsleaves(root->right,ans);
       dfsright(root->right,ans);
        
       return ans; 
    }
};