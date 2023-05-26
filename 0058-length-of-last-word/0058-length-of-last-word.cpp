class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        int count = 0;
        int i=s.length()-1; //start from end
        while(i>=0 && s[i] == ' ')
        {
            i--;
        }
        while(i>=0 && s[i] != ' ')
        {
            count++;
            i--;
        }
        return count;
    }
};
