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
    set<int> st;
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        st.insert(root->val);
        solve(root->left);
        solve(root->right);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        solve(root);
        vector<int> v(st.begin(),st.end());
        sort(v.begin(),v.end());

        return v[k-1];
    }
};


