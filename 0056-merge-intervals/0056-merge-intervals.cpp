//Time Complexity = O(nlogn) (sorting logn and n rooms)
//space complexity=O(logn) (sorting takes this space)
class Solution 
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
       if(intervals.size()<=1)
       {
           return intervals;
       }
       sort(intervals.begin(),intervals.end());  //sorting with start value
        
       vector<vector<int>> ans;
        
       ans.push_back(intervals[0]);
        
       for(int i=1;i<intervals.size();i++)
       {
           if(ans.back()[1] >= intervals[i][0])   //end time of the previous one is greater than the start time of the current one
           {
               ans.back()[1]=max(ans.back()[1],intervals[i][1]);
           }
           else
           {
               ans.push_back(intervals[i]);  //push the start time
           }
       }
        return ans;
    }
};