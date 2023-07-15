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
//Recursion
//Time Complexity = O(n) n is the number of nodes
//Space Complexity = O(n)  n for recursion stack
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        // if both are null then they are identical
        if(p==NULL && q== NULL)
        {
            return true;
        }
        //if only one is null
        if(p == NULL || q == NULL)
        {
            return false;
        }
        if(p->val != q->val)
        {
            return false;
        }
        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        //return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
        //the return statement will return true only if both the sides of the tree match
    }
};