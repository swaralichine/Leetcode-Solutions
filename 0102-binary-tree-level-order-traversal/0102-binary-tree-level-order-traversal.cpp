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
        vector<vector<int>> binarylevelordertraversal;
        
        if(root == NULL)
        {
            return binarylevelordertraversal;
        }
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            vector<int> v;
            for(int i=0;i<n;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left)
                {
                    q.push(curr->left);
                }
                if(curr->right)
                {
                    q.push(curr->right);
                }
            }
           binarylevelordertraversal.push_back(v); 
        }
        return binarylevelordertraversal;
    }
};
