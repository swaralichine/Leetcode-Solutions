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
    vector<int> ans;
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        //inorder traversal
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
    int minDiffInBST(TreeNode* root) 
    {
        solve(root);
        int min_dist=INT_MAX;
        for(int i=0;i<ans.size()-1;i++)
        {
            if(min_dist > abs(ans[i]-ans[i+1]))
               {
                   min_dist=abs(ans[i]-ans[i+1]);
               }
        }
       return min_dist;
    }
};



