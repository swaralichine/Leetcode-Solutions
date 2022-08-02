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
//using set because it stores all the unique values
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
    int findSecondMinimumValue(TreeNode* root) 
    {
        solve(root);
        vector<int> v(st.begin(),st.end());
        sort(v.begin(),v.end());
        
        //if only one element is present then we return -1
        if(v.size()==1)
        {
            return -1;
        }
        return v[1];
    }
};




