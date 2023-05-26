class Solution 
{
public:
    int maxDistance(vector<vector<int>>& arr)
    {
        int min_val = arr[0].front();
        int max_val = arr[0].back();
        int max_dist = 0;
        
        for(int i=1;i<arr.size();i++)
        {
            max_dist = max
            (
            max(abs(max_val - arr[i].front()),max_dist),
            max(abs(min_val - arr[i].back()),max_dist)
            );
            min_val = min(min_val, arr[i].front());
            max_val = max(max_val,arr[i].back());
        }
        return max_dist;
    }
};
