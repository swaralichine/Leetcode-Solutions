
class Solution
{
public:
    vector<int> maxDepthAfterSplit(string seq)
    {
        vector<int> ans;
        int max_depth = 0;
        for(auto s : seq) 
        {
            if(s == '(') 
            {
                max_depth++;
                ans.push_back(max_depth%2);
            } 
            else if(s == ')')
            {
                ans.push_back(max_depth%2);
                max_depth--;
            }
        }
        return ans;        
    }
};