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
    int deepest_leaves_sum=0;
    //function to find height of the tree
    int findheight(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return max(findheight(root->left),findheight(root->right))+1;
    }
    //function to find the sum of the deepest leaves
    void findsum(TreeNode* root,int height)
    {
        if(root == NULL)
        {
            return;
        }
        if(height==1)
        {
            deepest_leaves_sum+=root->val;
        }
        if(root->left)
        {
            findsum(root->left,height-1);
        }
        if(root->right)
        {
            findsum(root->right,height-1);
        }
    }
    int deepestLeavesSum(TreeNode* root) 
    {
        int height=findheight(root);
        findsum(root,height);
        return deepest_leaves_sum;
    }
};

    