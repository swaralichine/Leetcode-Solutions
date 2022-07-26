//Time Complexity=O(n)
//Space Complexity=O(n)
class Solution 
{
public:
    int findJudge(int n, vector<vector<int>>& trust)
    {
        //create a trust count array
        vector<int> trust_count(n,0);
        for(vector<int> t:trust)
        {
            trust_count[t[0]-1]--;
            trust_count[t[1]-1]++;
        }
        int judge=-1;
        for(int i=0;i<n;i++)
        {
            if(trust_count[i]==n-1)
            {
                return i+1;
            }
        }
        return judge;
    }
};