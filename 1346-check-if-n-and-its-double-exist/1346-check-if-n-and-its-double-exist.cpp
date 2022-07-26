//Binary Search
//Time Complexity=O(logn)
//Space Complexity=O(1)
class Solution 
{
public:
    bool checkIfExist(vector<int>& arr) 
    {
        //sort the array
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
        {
            //for positive part
            if(arr[i]>=0)
            {
                int left=i+1,right=arr.size()-1;
                while(left<=right)
                {
                    int mid=left+(right-left)/2;
                    if(arr[i]*2==arr[mid])
                    {
                        return true;
                    }
                    else if(arr[i]*2>arr[mid])
                    {
                        left=mid+1;
                    }
                    else
                    {
                        right=mid-1;
                    }
                }
            }
            //for negative part
            else
            {
                int left=0,right=i-1;
                while(left<=right)
                {
                    int mid=left+(right-left)/2;
                    if(arr[i]*2==arr[mid])
                    {
                        return true;
                    }
                    else if(arr[i]*2 > arr[mid])
                    {
                        left=mid+1;
                    }
                    else
                    {
                        right=mid-1;
                    }
                }
            }
        }
        return false;
    }
};
