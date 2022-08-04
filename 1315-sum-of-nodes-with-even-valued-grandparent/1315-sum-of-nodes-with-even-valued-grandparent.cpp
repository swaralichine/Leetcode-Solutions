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
    int sumEvenGrandparent(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        
        int sum=0;
        
        if(root->val % 2 == 0)
        {
            if(root->left != NULL && root->left->left != NULL)
            {
                sum=sum+root->left->left->val;
            }
            if(root->left != NULL && root->left->right != NULL)
            {
                sum=sum+root->left->right->val;
            }
            if(root->right != NULL && root->right->left != NULL)
            {
                sum=sum+root->right->left->val;
            }
            if(root->right != NULL && root->right->right != NULL)
            {
                sum=sum+root->right->right->val;
            }   
        }
        //traversing both left and right subtrees
        sum=sum+sumEvenGrandparent(root->left);
        sum=sum+sumEvenGrandparent(root->right);
        
        return sum;
    }
};