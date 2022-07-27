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
//Time Complexity=O(n)
//Space Complexity=O(n) (Since we are using DFS)
class Solution 
{
public:
    int range_sum;
    int rangeSumBST(TreeNode* root, int low, int high)
    {
        range_sum=0;
        dfs(root,low,high);
        return range_sum;
    }
    
    void dfs(TreeNode* node, int low, int high)
    {
        if(node!=NULL)
        {
            if(node->val >=low && node->val<=high)
            {
                range_sum=range_sum+node->val;
            }
            if(node->val > low)
            {
                dfs(node->left,low,high);
            }
            if(node->val < high)
            {
                dfs(node->right,low,high);
            }
        }
    }
};