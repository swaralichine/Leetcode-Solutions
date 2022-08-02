/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//Time Complexity=O(n) (n=number of nodes)
//Space Complexity=O(n)
class Solution 
{
public:
    TreeNode* ans;
    void solve(TreeNode* original, TreeNode* cloned, TreeNode* target)
    {
        if(original==NULL)
        {
            return;
        }
        if(original==target)
        {
            ans=cloned;
            return;
        }
        solve(original->left,cloned->left,target);
        solve(original->right,cloned->right,target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) 
    {
        solve(original,cloned,target);
        return ans;
    }
};    
   