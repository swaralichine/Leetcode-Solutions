class Solution 
{
public:

vector<int> findErrorNums(vector<int>& nums) 
{

    unordered_map<int,int> m;
    vector<int> ans;
	
    for(int i=0;i<nums.size();i++)
    {
      m[nums[i]]++;
    }
        
    for(auto x:m)
    {
        if(x.second==2)
        {
            ans.push_back(x.first);
            break;
        }
    }
    
    int temp=1;
    while(true)
    {
        if(m.find(temp)==m.end()) 
        {
            ans.push_back(temp);
            break;
        }
        else
        {
            temp++;
        }
         
    }
    return ans;
 }
};