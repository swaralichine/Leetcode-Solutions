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
//time complexity=O(n)
//space complexity=O(n)
class Solution 
{
private:
    int solve(TreeNode* root, int&diameter)  //pass value by reference
    {
         if(root == NULL)
         {
             return 0;
         }
        int left_height=solve(root->left,diameter);
        int right_height=solve(root->right,diameter);
        
        diameter=max(diameter,left_height+right_height);
        
        return max(left_height,right_height)+1;
    }
    public:
    int diameterOfBinaryTree(TreeNode* root) 
     {
         int diameter=0;
         solve(root,diameter);
         return diameter;
     }
};