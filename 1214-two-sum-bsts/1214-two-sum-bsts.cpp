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
//Using Binary Search
//Time Complexity=O(n1+n2) n1=nodes in root1,n2=nodes in root2
//Space Complexity=O(n1+n2)
class Solution
{
public:
    //function to store the inorder values
    void inorder(TreeNode* root,vector<int>& v)
    {
        if(root==NULL)
        {
            return;
        }
        if(root!=NULL)
        {
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
    }
    
    //main caller function
    bool twoSumBSTs(TreeNode* root1, TreeNode* root2, int target)
    {
        vector<int> v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        
        int i=0,j=v2.size()-1;
        while(i<=v1.size() && j>=0)
        {
            if(v1[i]+v2[j]==target)
            {
                return true;
            }
            else if(v1[i]+v2[j]>target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return false;
    }
};