//Time Complexity = O(1)
//Space Complexity = O(1)

class Solution 
{
public:
    string reverseWords(string s) 
    {
        int left = 0, right = 0;

        while (right < s.size()) 
        {
            if (s[right] == ' ')
            {
                reverseWord(s, left, right - 1);
                left = right + 1;
            }
            right++;
        }

        reverseWord(s, left, right - 1);  //for last word 
        
        return s;
    }

private:
    void reverseWord(string& s, int left, int right)
    {
        while (left < right) 
        {
            swap(s[left], s[right]);
              left++;
              right--;
        }
    }

};