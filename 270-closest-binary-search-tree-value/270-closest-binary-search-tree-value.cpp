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
//Time Complexity=O(logn)
class Solution 
{
public:
    int closestValue(TreeNode* root, double target) 
    {
        double diff = DBL_MAX, value = root->val;
        
        while(root && value != target)
        {
            
            if(diff > abs(root->val - target))
            {
                diff = abs(root->val - target);
                value = root->val;
            }
            if( target < root->val) 
                root= root->left;
            else if( target > root->val) 
                root= root->right;
            
        }
        return value;
    }
};