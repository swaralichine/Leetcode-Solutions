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
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int> output;
        queue<TreeNode*> q;
        q.push(root);
        
        if(!root)
        {
            return output;
        }
        while(!q.empty())
        {
            vector<int> helper;
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                helper.push_back(node->val);
                
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            output.push_back(helper[n-1]);
        }
        return output;
    }
};



