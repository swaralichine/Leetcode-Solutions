/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };**/
class Solution 
{
public:
    
    bool pathSum(TreeNode* root, int targetSum, int currSum) 
    {
        
        if (root == NULL)  
        {
            return false; 
        }

        currSum = currSum + root->val;
        
        if ((root->left == NULL && root->right == NULL) && targetSum == currSum)
        {
            return true;
        }
        
        bool left = pathSum(root->left, targetSum, currSum);
        bool right = pathSum(root->right, targetSum, currSum);
        
        return left || right;
    }
    
    
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        int currSum = 0;
        bool ans = pathSum(root, targetSum, currSum);
        
        return ans;
    }
};