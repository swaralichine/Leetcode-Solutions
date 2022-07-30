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
    TreeNode* solve_preorder(vector<int>& preorder,int min,int max,int& i)
    {
        if(i>=preorder.size())
        {
            return NULL;
        }
        if(preorder[i] < min || preorder[i] > max)
        {
            return NULL;
        }
        //create a root
        TreeNode* root= new TreeNode(preorder[i++]);
        root->left=solve_preorder(preorder,min,root->val,i);
        root->right=solve_preorder(preorder,root->val,max,i);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        int mini=INT_MIN;
        int maxi=INT_MAX;
        int i=0;
        return solve_preorder(preorder,mini,maxi,i);
    }
};