//Time Complexity=O(n)
//Space Complexity=O(1)
//a=values[i]+i
//b=values[j]+j
//we want max(a+b)
//split into a and b
//find max of both
//add them and keep finding the max
class Solution 
{
public:
    int maxScoreSightseeingPair(vector<int>& values)
    {
       int ans=INT_MIN;
        int a=values[0]+0;
        for(int i=1;i<values.size();i++)
        {
            ans=max(ans,a+values[i]-i);
            a=max(a,values[i]+i);
        }
        return ans;
    }
};


