//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    vector<int> findBuildings(vector<int>& heights) 
    {
        int max_height_till_now=0;
        vector<int>ans;
        for(int i=heights.size()-1;i>=0;i--)
        {
            if(heights[i]>max_height_till_now)
            {
                max_height_till_now=heights[i];
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};


