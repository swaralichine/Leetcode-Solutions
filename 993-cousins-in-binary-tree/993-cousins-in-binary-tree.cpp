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
//Using DFS
//Time Complexity=O(n)
//Space Complexity=O(Height of the tree)
class Solution 
{
public:
    int depth_x=0;
    int depth_y=0;
    int parent_x=-1;
    int parent_y=-1;
    
    void solve(TreeNode* root,int x,int y,int depth, int parent)
    {
        if(root==NULL)
        {
            return;
        }
        //x is found
        if(root->val == x)
        {
            depth_x=depth;
            parent_x=parent;
        }
        //y is found
        if(root->val == y)
        {
            depth_y=depth;
            parent_y=parent;
        }
        //call for left child
        solve(root->left,x,y,depth+1,root->val);
        //call for right child
        solve(root->right,x,y,depth+1,root->val);
    }
    
    bool isCousins(TreeNode* root, int x, int y) 
    {
        //call dfs
        solve(root,x,y,0,-1);
        
        //check if the hight is same
        if(depth_x!=depth_y)
        {
            return false;
        }
        if(depth_x==depth_y && parent_x!=parent_y)
        {
            return true;
        }
        return false;
    }
};