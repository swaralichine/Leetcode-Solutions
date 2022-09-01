// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//Binary Search Approach
//Time Complexity = O(logn)
//Space Complexity = O(1)
class Solution 
{
public:
    int firstBadVersion(int n) 
    {
        int left=1;
        int right=n;
        
        while(left < right)
        {
            int mid = left+(right-left)/2;
            
            if(isBadVersion(mid))
            {
                right=mid;
            }
            else
            {
                left=mid+1;
            }
        }
        return left;
    }
};