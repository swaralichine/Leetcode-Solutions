//time complexity=O(nlogn)
//space complexity=O(1)
class Solution 
{
public:
    vector<int> sortEvenOdd(vector<int>& nums)
    {
      //using two seperate vectors for even and odd indices
        vector<int> even;
        vector<int> odd;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        //sorting the two vectors seperately
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        
        int j=0; //for even coz increasing order
        int k=odd.size()-1;  //for odd coz decreasing order
        
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums[i]=even[j];
                j++;
            }
            else
            {
                nums[i]=odd[k];   //starting from back coz we want in decreasing order
                k--;
            }
        }
        return nums;
    }
};