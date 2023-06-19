class Solution 
{
public:
    int lengthOfLastWord(string s) 
    {
        int count = 0;
        int i=s.length()-1; //start from end
        while(i>=0 && s[i] == ' ')    //trimming white spaces
        {
            i--;
        }
        while(i>=0 && s[i] != ' ')     //calculate the length of the last word now that it is found
        {
            count++;
            i--;
        }
        return count;
    }
};
