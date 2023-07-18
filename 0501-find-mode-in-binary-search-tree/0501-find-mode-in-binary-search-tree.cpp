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
public:
    map<int,int> mp;
    
    void solve(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        //store the frequency in the map(mp)
        mp[root->val]++;
        solve(root->left);
        solve(root->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
      solve(root);
      vector<int> ans;
      int count=0;
        
      //finding the maximum count stored in hashmap
      for(auto x: mp)
      {
          count=max(count,x.second);
      }
        //finding the element associated with the maximum count
       for(auto i:mp)
       {
           if(i.second==count)
           {
               ans.push_back(i.first);
           }
       }
        return ans;
    }
};





