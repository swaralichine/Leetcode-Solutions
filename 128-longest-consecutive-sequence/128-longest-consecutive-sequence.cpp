//Arrays and Hashing
class Solution 
{
public:
    int longestConsecutive(vector<int>& nums) 
    {
        if(nums.size()==0)
return 0;
int max=1;
int cmax=1;
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size()-1;i++)
{
if(nums[i+1]!=nums[i])
{
if(nums[i+1]-nums[i]==1)
cmax++;
else
cmax=1;
if(cmax>max)max=cmax;
}
}
return max;
    }
};