//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    int maxNumberOfBalloons(string text) 
    {
       int bcount=0;
       int acount=0;
       int lcount=0;
       int ocount=0;
       int ncount=0;
        
       for(int i=0;i<text.length();i++)
       {
           if(text[i]=='b')
           {
               bcount++;
           }
           else if(text[i]=='a')
           {
               acount++;
           }
           else if(text[i]=='l')
           {
               lcount++;
           }
           else if(text[i]=='o')
           {
               ocount++;
           }
           else if(text[i]=='n')
           {
               ncount++;
           }
       }
        lcount=lcount/2;
        ocount=ocount/2;
        
        return min({bcount,acount,lcount,ocount,ncount});
    }
};