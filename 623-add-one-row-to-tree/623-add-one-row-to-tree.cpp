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
//The idea here is to get to the (depth-1) level, store the nodes in that level as we have to append nodes with value val to their left and right. Once we store them, we just assign the left and right nodes to them (will be more clear in the code).
//using DFS
class Solution 
{
public:
    void dfs(TreeNode* root, int val,int depth, int d)
    {
         if(root == NULL) 
             return;
        //store the nodes at d=depth-1 and then make changes
        if(d==depth-1)
        {
            //left side of the tree depth
            TreeNode* temp1 = root->left;
            root->left=new TreeNode(val);
            root->left->left=temp1;
            
           //right side of the tree depth
            TreeNode* temp2=root->right;
            root->right=new TreeNode(val);
            root->right->right=temp2;
            
            return;
        }
        dfs(root->left,val,depth,d+1);
        dfs(root->right,val,depth,d+1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) 
    {
        //if the depth = 1, then append the tree to the left
        if(depth == 1)
        {
            TreeNode* temp = new TreeNode(val);
            temp -> left = root;
            return temp;
        }
        dfs(root,val,depth,1);
        return root;
    }
};