class Solution 
{
public:
    string largestOddNumber(string num)
    {
        //we start from right since we want to find the largest odd number
        for(int i=num.size()-1;i>=0;i--)
        {
            if((num[i]-'0')%2==1)  //coz num is given as a string
            {
                return num.substr(0,i+1);
            }
        }
        return "";    //no odd integer exists
    }
};
