class Solution 
{
public:
    int kthFactor(int n, int k)
    {
        //vector to store the ans
        vector<int> ans;
        ans.push_back(1);
        
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                ans.push_back(i);
            }
        }
        if(ans.size()<k)   //if size is less than k
        {
            return -1;
        }
        return ans[k-1];
    }
};



