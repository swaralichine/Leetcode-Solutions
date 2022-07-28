class Solution
{
public:
    int heightChecker(vector<int>& heights) 
    {
        int count=0;
        vector<int> expected;
        for(int i=0;i<heights.size();i++)
        {
            expected.push_back(heights[i]);
        }
        sort(expected.begin(),expected.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i] != expected[i])
            {
             count++;   
            }
        }
        return count;
    }
};
