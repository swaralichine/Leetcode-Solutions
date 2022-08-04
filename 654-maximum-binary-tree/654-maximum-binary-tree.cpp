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
//Time Complexity=O(n^2) (worst case)
class Solution 
{
public:
    TreeNode* solve(vector<int>& nums,int i,int j)
    {
        if(i>j)
        {
            return NULL;
        }
        //finding the maximum element for the root
        int maxi=0;
        int index=i;
        
        for(int k=i;k<=j;k++)
        {
            if(nums[k]>maxi)
            {
                index=k;
                maxi=nums[k];
            }
        }
        TreeNode* root=new TreeNode(maxi);
        //we now traverse the left and right subtrees with respect to the root index
        root->left=solve(nums,i,index-1);
        root->right=solve(nums,index+1,j);
        
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
      int n=nums.size();
      
      return solve(nums,0,n-1);
    }
};

