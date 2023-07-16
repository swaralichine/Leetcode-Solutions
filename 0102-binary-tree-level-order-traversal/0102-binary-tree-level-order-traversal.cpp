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



class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> res{};
        if(root == NULL) return res;
        
        queue<TreeNode*> q{};
        q.push(root);
        
        while(!q.empty())
        {
            int sz = q.size();
            vector<int> vec;
            for(int i = 0; i < sz; i++) {
                TreeNode* curr = q.front();
                q.pop();
                vec.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            res.push_back(vec);
        }
        return res;
    }
};

