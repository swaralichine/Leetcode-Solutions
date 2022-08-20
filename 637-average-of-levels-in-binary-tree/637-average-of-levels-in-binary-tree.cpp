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
//using BFS
//time complexity=O(n) whole tree of n nodes is traversed atmost once
//space complexity=O(m) m=max nodes at any level in the input tree
class Solution 
{
public:
    vector<double> averageOfLevels(TreeNode* root)
    {
        if(root==NULL)
        {
            return {};
        }
        
        queue<TreeNode*>q;
        q.push(root);
        vector<double>ans;
        
        double count=0;
        double sum=0;
        
        while(!q.empty())
        {
            int size=q.size();
            count=size;
            sum=0;
            
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                sum=sum+temp->val;
                q.pop();
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(sum/count);
        }
        return ans;
    }
};