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
//time complexity = O(n)
//space complexity =O(n)
class Solution 
{
public:
    void solve(TreeNode* node,int k, vector<int> &v)
    {
        if(node == NULL)
        {
            return;
        }
        solve(node->left,k,v);
        v.push_back(node->val);
        solve(node->right,k,v);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int> v;
        solve(root,k,v);
        sort(v.begin(),v.end());
        return v[k-1];
    }
};
