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
//The traversing order is queue->helper->output
//the queue will have the root->left->right and their children
//the helper will have the popped elements from queue
//the helper will have the rightmost nodes stored at last
//we store the last element from helper into the output for rightmost view
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



