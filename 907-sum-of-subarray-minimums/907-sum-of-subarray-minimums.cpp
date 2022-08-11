//Time complexity=O(n)
class Solution 
{
public:
    int sumSubarrayMins(vector<int>& arr)
    {
        //taking two stacks to store g1,g2 indexes;
        stack<int> s1,s2;
        int n=arr.size();
        
        vector<int> next_smaller(n);
        vector<int> pre_smaller(n);
        
        for(int i=0;i<n;i++)
        {
            next_smaller[i]=n-i-1;
            pre_smaller[i]=i;
        }
        
        //finding g2
        for(int i=0;i<n;i++)
        {
            while(!s1.empty() && arr[s1.top()] > arr[i])
            {
                next_smaller[s1.top()]=i-s1.top()-1;;
                s1.pop();
            }
            s1.push(i);
        }
        //finding g1
        for(int i=n-1;i>=0;i--)
        {
            while(!s2.empty() && arr[s2.top()] >= arr[i])
            {
                pre_smaller[s2.top()]=s2.top()-i-1;;
                s2.pop();
            }
            s2.push(i);
        }
        long long int ans=0;
        long long int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            //formula = a[i]*(g1+1)*(g2+1)
            ans=(ans+(arr[i]*(pre_smaller[i]+1)%mod* (next_smaller[i]+1)%mod));
            ans=ans%mod;
        }
        return ans;
    }
};