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
//Space Complexity=O(n)
class Solution 
{
public:
    bool checksymmetric(TreeNode* left,TreeNode* right)
    {
        if(left==NULL || right == NULL){
            return left == right; // it must be equal to be symmetric
        }
        
        if(left->val != right->val) return false;
        
        // as mirrors left is right for the other guy
        //We return true if both the subtrees are same
        return checksymmetric(left->left, right->right)
                &&
               checksymmetric(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root)
    {
        if(root == NULL) return true;
        return checksymmetric(root->left,root->right);
    }
};



