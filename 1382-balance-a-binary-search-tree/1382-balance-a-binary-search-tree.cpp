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
//Intuition :- Store the inorder traversal of the given BST in a vector(say nums).Now find the mid of the vector nums and assign
//nums[mid] as the newRoot.Now set all the elements that are in left of nums[mid] as the left
//subtree and the one towards right of nums[mid] as the right subtree.Do these steps recursively.

//1.Time Complexity = O(N)+O(N),for performing inorder traversal + since we are iterating over all the n-elements of nums
//to create the tree of n-nodes
//2.Space Complexity = O(N) ,for storing the inorder traversal + o(N) space is required to construct the tree
//3.Recursive stack space = O(h)

class Solution
{
public:
      //function to create a Balanced BST
     TreeNode* createbalancedBST(vector<int>nums,int left,int right)
     {
         if(left>right)
         {
             return NULL;
         }
         int mid=(left+right)/2;
         
         TreeNode* newroot = new TreeNode(nums[mid]);
         
         newroot->left=createbalancedBST(nums,left,mid-1);
         newroot->right=createbalancedBST(nums,mid+1,right);
         
         return newroot;
     }
     //function to find the inorder traversal of the given BST
     void inorder(TreeNode* root,vector<int>& nums)
     {
         if(root==NULL)
         {
             return;
         }
         inorder(root->left,nums);
         nums.push_back(root->val);
         inorder(root->right,nums);
     }
    
    //main control function
    TreeNode* balanceBST(TreeNode* root) 
    {
        vector<int> nums;
        inorder(root,nums);
        
        //calling balanced tree function and declaring newroot to accept the root
        TreeNode* newroot= createbalancedBST(nums,0,nums.size()-1);
        return newroot;
    }
};