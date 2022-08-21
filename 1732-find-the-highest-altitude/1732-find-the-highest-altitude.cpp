//time complexity=O(n)
//space complexity=O(1)
class Solution
{
public:
    int largestAltitude(vector<int>& gain) 
    {
        int max_altitude=0;
        int altitude_sum=0;
        
        for(int i:gain)
        {
            altitude_sum+=i;
            max_altitude=max(max_altitude,altitude_sum);
        }
       return max_altitude;       
    }
};



