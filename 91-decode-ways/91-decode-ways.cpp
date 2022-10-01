// Time Complexity: O(N)
// Space Complexity: O(N)
// This solution can be further space-optimized to be O(1). Let's think about it :D
class Solution 
{
public:
    // number of ways to do something -> think about dp
    int numDecodings(string s) 
    {
        // cannot map to any character due to the leading zero
        if (s.front() == '0') 
            return 0;
        int n = s.size(); 
        // dp[i]: number of ways of decoding the substring s[:i]
        vector<int> dp(n + 1);
        // base case
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            // check single digit decode
            // valid deocde is possible only when s[i - 1] is not zero
            // if so, take the previous state dp[i - 1]
            // e.g. AB - 1[2]
            if (s[i - 1] != '0') dp[i] = dp[i - 1];
            // check double digit decode
            // by looking at the previous two digits
            // if the substring belongs to the range [10 - 26]
            // then add the previous state dp[i - 2]
            // e.g. L - [12]
            if (i >= 2) 
            {
                // or you can use `stoi(s.substr(i - 2, 2))`
                int x = (s[i - 2] - '0') * 10 + s[i - 1] - '0';
                // check the range
                if (10 <= x && x <= 26) dp[i] += dp[i - 2];
            }
        }
        return dp[n];
    }
};