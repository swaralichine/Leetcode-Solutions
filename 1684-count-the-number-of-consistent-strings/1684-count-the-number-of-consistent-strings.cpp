/*Approach:

Store allowed characters:
    Use an unordered_map to store characters from allowed with value 1, which indicates the character is allowed.

Iterate through each word:
    For each word in the words list, check every character.
    If any character is not in the allowed characters (i.e., the map value is not 1), skip that word using a break.

Count valid words:
    If all characters in the word are found in the allowed map, increase the count by 1.

Return the count:
    After checking all words, return the total number of consistent words.
Complexity
Time complexity:
O(n * m) where:

n is the number of words in the words list.
m is the average length of each word.
Space complexity:
O(k) where:

k is the number of unique characters in the allowed string (for storing in the map).
*/

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        unordered_map<char, int> mp;
        for(auto i : allowed)
        {
            mp[i] = 1;
        }

        int count = 0;
        for(auto str : words)
        {
            for(int i=0;i<str.length();i++)
            {
                if(mp[str[i]] != 1)
                {
                    break;
                }
                if(i == str.length()-1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};