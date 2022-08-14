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
private:
int height(TreeNode* root, int&diamter)
{
     if(root == NULL) 
          return 0;

    int lh = height(root -> left, diamter);
    int rh = height(root -> right, diamter);
    
    diamter = max(diamter, (lh + rh));   //distance between two leaves
    
    return max(lh , rh) +1;
}
public:
int diameterOfBinaryTree(TreeNode* root) 
    {
     int diamter =0;
     height(root,diamter);
     return diamter;
 }
};