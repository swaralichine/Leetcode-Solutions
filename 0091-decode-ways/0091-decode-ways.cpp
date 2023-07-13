// Time Complexity: O(N)
// Space Complexity: O(N)
// This solution can be further space-optimized to be O(1). Let's think about it :D
class Solution {
public:
    int numDecodings(string s) {
        int size=s.length();
          vector<int>dp(size+1,-1);
          dp[0]=1;
          dp[1]=1;
          if(s[0]=='0')
          {
              return 0;
          }
          for(int i=2;i<=size;i++)
          {
             dp[i]=0;
             if(s[i-1]>'0')
             {
                    dp[i]=dp[i-1];
             }
             if(s[i-2]=='1' || (s[i-2]=='2' && s[i-1]<'7'))
             {
                 dp[i]+=dp[i-2];
             }
          }
          return dp[size];
    }
};