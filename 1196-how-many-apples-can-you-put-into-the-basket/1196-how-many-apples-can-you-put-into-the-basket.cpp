class Solution 
{
public:
    int maxNumberOfApples(vector<int>& weight)
    {
        int sum=0;
        int apple_count=0;
        sort(weight.begin(),weight.end());
        for(int i=0;i<weight.size();i++)
        {
           sum=sum+weight[i];
            if(sum<=5000)
            {
               apple_count++; 
            }
        }
        return apple_count;
    }
};

