class Solution 
{
public:
    int mostWordsFound(vector<string>& s)
    {
        int max_words = 0;
        int i=0;
        while(i < s.size())
        {
            int count = 1;
            int j=0; 
            while(j < s[i].length())
            {
                if(s[i][j++] == ' ')
                {
                   count++;   
                }
            }
            i++;
            max_words = max(count, max_words);
        }
        return max_words;
    }
};

