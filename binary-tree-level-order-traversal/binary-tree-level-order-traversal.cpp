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
//BFS
//Time Complexity = O(n)
//Space Complexity = O(n)
//using BFS(queue)
class Solution
{
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(!root)
        {
            return{};
        }
        
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int> a;
            
            while(n--)
            {
                TreeNode* t=q.front();
                q.pop();
                a.push_back(t->val);
                if(t->left)
                {
                    q.push(t->left);
                }
                if(t->right)
                {
                    q.push(t->right);
                }
            }
            ans.push_back(a);
        }
        return ans;
    }
};

