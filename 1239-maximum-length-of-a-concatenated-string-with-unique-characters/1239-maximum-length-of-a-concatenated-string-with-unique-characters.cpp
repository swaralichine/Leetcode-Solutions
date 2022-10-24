class Solution 
{
    int ans=0;
    
    void recur(vector<string> &arr, int idx, unordered_map<char, int> prev, int currlen)
    {        
        ans=max(ans, currlen);  //find the running maximum
        
        if(idx==arr.size())   //reached the end of the string
        {
            return;
        }
        
        recur(arr, idx+1, prev, currlen);  //start traversing from index+1
        
        for(auto a : arr[idx])
        {
            prev[a]++;     //increase the count for the alphabets
            if(prev[a]>1)  //alphabet is already present
            {
              return;
            } 
        }
        recur(arr, idx+1, prev, currlen+arr[idx].size());
    }
    
public:
    int maxLength(vector<string>& arr) 
    {
        ans=0;
        unordered_map<char, int> prev;
        recur(arr, 0, prev, 0);
        return ans;
    }
};