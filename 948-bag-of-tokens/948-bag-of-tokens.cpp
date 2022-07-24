//Greedy Approach
//Time Complexity = O(nlogn)
//Space Complexity = O(logn)
//We start from left first(face up)
//Then start from right(face down)
class Solution
{
public:
    int bagOfTokensScore(vector<int>& tokens, int power) 
    {
        sort(tokens.begin(),tokens.end());
        int low=0,high=tokens.size()-1;
        int points=0,ans=0;
        
        while(low<=high && (power>=tokens[low] || points>0))
        {
            while(low<=high && power>=tokens[low])
            {
                power=power-tokens[low++];  //face up
                points++;
            }
            ans=max(ans,points);
            if(low<=high && points>0)
            {
                power=power+tokens[high--];     //face down
                points--;
            }
        }
        return ans;
    }
};