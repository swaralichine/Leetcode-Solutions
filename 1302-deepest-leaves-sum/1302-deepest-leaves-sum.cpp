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
//n=number of nodes
//Time Complexity=O(n)
//Space Complexity=O(H)
//We find the height of the tree and then find the leaves at that particular level
class Solution 
{
public:
    int height;
    int deepest_leaves_sum=0;
    //function to find the sum of the deepest leaves
    void findsum(TreeNode* root,int depth)
    {
        if(!root)   return ;
        depth++;
        if(root->left==NULL && root->right==NULL && depth==height)
            deepest_leaves_sum+=root->val;
        findsum(root->left,depth);
        findsum(root->right,depth);
    }
    //function to find the height of the tree
    int findheight(TreeNode* root)
    {
        if(!root)
            return 0;
        int leftheight = findheight(root->left);
        int rightheight = findheight(root->right);
        
        return 1+max(leftheight,rightheight);
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        height=findheight(root);
        findsum(root,0);
        return deepest_leaves_sum;
    }
};
