class Solution {
public:
    int findTheLongestSubstring(string s) 
    {
        // Map to store the first occurrence of each parity state
        unordered_map<int, int> mp;
        
        mp[0] = -1;  // Initialize with state 0 at index -1
        
        // State variables to track counts of vowels
        int state = 0;
        int maxLength = 0;
        
        // Traverse the string
        for (int i = 0; i < s.size(); ++i) 
        {
            char ch = s[i];
            
            // Update state based on vowel occurrence
            if (ch == 'a') state ^= 1 << 0;  // Toggle bit 0 for 'a'
            if (ch == 'e') state ^= 1 << 1;  // Toggle bit 1 for 'e'
            if (ch == 'i') state ^= 1 << 2;  // Toggle bit 2 for 'i'
            if (ch == 'o') state ^= 1 << 3;  // Toggle bit 3 for 'o'
            if (ch == 'u') state ^= 1 << 4;  // Toggle bit 4 for 'u'
            
            // Check if this state has been seen before
            if (mp.find(state) != mp.end()) 
            {
                // Calculate the length of the substring
                maxLength = max(maxLength, i - mp[state]);
            } 
            else 
            {
                // Store the first occurrence of this state
                mp[state] = i;
            }
        }
        return maxLength;
    }
};
