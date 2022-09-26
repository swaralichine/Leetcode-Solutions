class Solution 
{
public:
    int countGoodSubstrings(string str) 
    {
        int unique=0;
        if(str.size() < 2)
        {
          return unique;   
        }
        for(int i=0;i<str.size()-2;i++)
        {
            //checking if the three characters are equal in the string
            if((str[i] != str[i+1]) && (str[i] != str[i+2]) && (str[i+1] != str[i+2]))
            {
                unique++;
            }
        }
        return unique;
    }
};


