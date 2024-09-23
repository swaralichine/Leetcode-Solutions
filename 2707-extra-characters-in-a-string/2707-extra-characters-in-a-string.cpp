class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_set<string> words(dictionary.begin(), dictionary.end());
        int s_length = s.length();
        vector<int> dp(s_length + 1, 0); // length: 0 ~ len

        int max_word_len = 0;
        for (const string& word : words)
            max_word_len = max(max_word_len, (int)word.length());
        
        for (int i = 1; i <= s_length; ++i) {
            dp[i] = dp[i - 1] + 1; // assume no match at first (s[i] is the extra char)
            for (int l = 1; l <= i; ++l) {
                if (l <= max_word_len && words.find(s.substr(i - l, l)) != words.end())
                    dp[i] = min(dp[i], dp[i - l]);
            }
        }

        return dp[s_length];
    }
};