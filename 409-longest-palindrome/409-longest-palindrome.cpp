//Greedy Solution
//Time Complexity = O(n)
//Space Complexity = O(1)
class Solution
{
public:
    int longestPalindrome(string s) 
    {
        unordered_map<char,int> counts;  //to store the frequency of elements
        int result=0;
        bool odd_count=false;   
        for(char c:s)
        {
            counts[c]++;
        }
        for(auto p:counts)
        {
            if(p.second % 2 == 0)   //if the count of characters is even 
            {
                result+=p.second;
            }
            else
            {
                odd_count=true;      //if the count of characters is odd
                result+=p.second-1;    //subtract one to distribute it evenly
            }
        }
        if(odd_count)
        {
          result++;    //add one if the count is odd for the center character
        }
        return result;
    }
};