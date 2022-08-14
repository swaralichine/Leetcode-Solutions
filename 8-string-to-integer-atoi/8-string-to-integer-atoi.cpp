//time complexity=O(n)
//space complexity=O(1)
class Solution 
{
public:
    int myAtoi(string s) 
    {
        int i=0,n=s.length();
        
        while(i<n && s[i]==' ')
            i++;
        int flag=1;
        
        if(s[i]=='+')
            i++;
        else if(s[i]=='-')
        {
            flag=0;
            i++;
        }
        long res=0;
        
        for(;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                res=res*10+(s[i]-'0');
                if(res>=INT_MAX || res<=INT_MIN)
                    break;
            }
            else break;
        }
        if(flag==0)
            res=res*-1;
        if(res>=INT_MAX)
            return INT_MAX;
        else if(res<=INT_MIN)
            return INT_MIN;
        return res;
    }
};