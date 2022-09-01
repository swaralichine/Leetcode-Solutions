//time complexity=O(n)
//space complexity=O(logn)
class Solution 
{
public:
    
    int count = 0;
    
    void dfs(TreeNode* root, int maxi)
    {
        // base case
        
        if(root == NULL)
            return ;
        
        // if max. value of ancestors is less than or equal to curr node then increment count
        
        if(root -> val >= maxi)
        {
            count++;
        }
        
        // update maxi
        
        maxi = max(maxi, root -> val);
        
        // call for left subtree
        
        dfs(root -> left, maxi);
        
        // call for right subtree
        
        dfs(root -> right, maxi);
    }
    
    int goodNodes(TreeNode* root)
    {
        
        if(root == NULL)
            return 0;
        
        dfs(root, root -> val);
        
        return count;
    }
};