//time complexity=O(n)
//space complexity=O(1)
class Solution 
{
public:
    bool makePalindrome(string s) 
    {
        int low = 0, high = s.size()-1, count = 0;
        while(low < high){
            if(s[low] != s[high])
                count++;
            if(count > 2)
                return false;
            low++, high--;
        }
        return true;
    }
};
