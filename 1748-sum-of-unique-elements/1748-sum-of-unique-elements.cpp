class Solution 
{
public:
    int sumOfUnique(vector<int>& nums) 
    {
      int sum_of_unique_elements=0;
      map<int,int> mp;
      for(int i=0;i<nums.size();i++)
      {
          mp[nums[i]]++;
      }
        for(auto x:mp)
        {
            if(x.second==1)
            {
                sum_of_unique_elements+=x.first;
            }
        }
        return sum_of_unique_elements;
    }
};