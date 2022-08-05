//Time Complexity=O(m*n) (m=customer,n=bank)
//Space Complexity=O(1)
class Solution 
{
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int max_wealth_so_far=0;
        int curr_max_wealth=0;
        
        for(int i=0;i<accounts.size();i++)
        {
            curr_max_wealth=0;
            for(int j=0;j<accounts[0].size();j++)
            {
                curr_max_wealth=curr_max_wealth+accounts[i][j];
            }
            if(curr_max_wealth > max_wealth_so_far)
            {
                max_wealth_so_far=curr_max_wealth;
            }
        }
        return max_wealth_so_far;
    }
};