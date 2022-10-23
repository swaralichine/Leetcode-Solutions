//naive approach
//time complexity=O(n)
//Space complexity=O(1)
class Solution
{
    public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> ans;
        
        string ans1="FizzBuzz";
        string ans2="Fizz";
        string ans3="Buzz";
        
        for(int i=1;i<=n;i++)
        {
            if(i%3 == 0 && i%5 == 0)
            {
                ans.push_back(ans1);
            }
            else if(i%3 == 0)
            {
                ans.push_back(ans2);
            }
            else if(i%5 == 0)
            {
                ans.push_back(ans3);
            }
            else
            {
                ans.push_back(to_string(i));
            }
        }
        return ans;
    }
};
