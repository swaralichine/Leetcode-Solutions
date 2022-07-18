//Binary Search Approach
//Time Complexity = O(logn)
//Space Complexity = O(1)


class Solution
{
public:
    int mySqrt(int x) 
    {
        int start=1;
        int end=x;
        int ans=0;
        
        while(start<=end)
        {
            long long int mid=start+(end-start)/2;
            
            if(mid*mid==x)
                return mid;
            
            if(mid*mid<x)
            {
                ans=mid;
                start=mid+1;
            }
            else
                end=mid-1;            
        }
        return ans;
    }
};