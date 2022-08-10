class Solution 
{
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) 
    {
        vector<int>v(1001);
        //adding passengers for "from" and dropping them at "to"
        for(int i=0;i<trips.size();i++)
        {
            v[trips[i][1]]= v[trips[i][1]]+trips[i][0];
            v[trips[i][2]]= v[trips[i][2]]-trips[i][0];
        }
        for(int x:v)
        {
            capacity=capacity-x;
            if(capacity<0)
            {
                return false;
            }
        }
        return true;
    }
};


