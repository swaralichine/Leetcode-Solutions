class Solution 
{
public:
    bool canMakeArithmeticProgression(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int diff = arr[1]-arr[0];
        bool flag=true;
        for(int i=2;i<arr.size();i++)
        {
            if(arr[i] - arr[i-1] != diff)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};