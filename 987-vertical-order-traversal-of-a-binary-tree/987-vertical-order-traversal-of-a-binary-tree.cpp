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
class Solution {
public:
    void FindAnswer(TreeNode* root, int currentX, int currentY, map<int, vector<pair<int,int>>>& resMap)
    {
        // base case - no node, return
        if(root == NULL)
            return;
        
        // left node recursion
        FindAnswer(root->left, currentX - 1, currentY - 1, resMap);
    
        // if we have a new entry, then insert a new entry point
        if(resMap.find(currentX) == resMap.end())
        {
            // insert it as a new vector with a pair of the Y and our value
            resMap[currentX] = vector<pair<int,int>>(1, pair<int,int>(currentY, root->val));
        }
        else
        {
            // insert the new value
            resMap[currentX].push_back(pair<int,int>(currentY, root->val));
            
            // resort the list based on TWO conditions
            // first: if we have two equal positions, place the smaller one earlier
            // second: if they are not equal, place the higher Y value first
            std::sort(resMap[currentX].begin(), resMap[currentX].end(), [](const pair<int,int>& v1, const pair<int,int>& v2) {
                if(v1.first == v2.first)
                    return v1.second < v2.second;
                return v1.first > v2.first;
            });
        }
        
        // right node recursion
        FindAnswer(root->right, currentX + 1, currentY - 1, resMap);
    }
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> res;                    // the answer to return
        map<int, vector<pair<int,int>>> resMap;     // tracking our data
        
        FindAnswer(root, 0, 0, resMap);             // calculate answer
        
        // iterate over our tracked data
        for(pair<int, vector<pair<int,int>>> x : resMap)
        {
            // create a new vector to add to our res
            vector<int> resPartial;
            
            //add each actual value to our vector instead of the index
            for(pair<int,int> partial : x.second)
                resPartial.push_back(partial.second);
            
            // add it to our res
            res.push_back(resPartial);    
        }
        
        return res;
    }
};