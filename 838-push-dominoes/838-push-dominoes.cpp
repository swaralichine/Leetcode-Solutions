class Solution 
{
public:
    string pushDominoes(string d) 
    {
        int n = d.size();
        int i=0, j=1;
        
        d='L'+d+'R';
        
        while(j <= n)
        {
            while(d[j] == '.')  //domino has not been pushed
            {
                j++;
            }
            //Case 1: When both the elements are same, place this element in all the dots
            if(d[j] == d[i])
            {
                while(i<j)
                {
                    d[i++]=d[j];
                }
            }
            //Case 2: When left=L and right=R, do nothing
            else if(d[i] == 'L' && d[j] == 'R')
            {
                i=j++;
                continue;
            }
            //Case 3: When left=R and right=L, we have two cases
            else
            {
                int count=j-i-1;
                int mid = i+((j-i)/2);
                
                //Case 3.1: When no. of dots are odd, leave middle as dot
                if(count & 1)
                {
                    while(i < mid)
                    {
                        d[i++] ='R';
                    }
                    i=mid+1;
                    while(i < j)
                    {
                        d[i++] = 'L';
                    }
                }
                
                //Case 3.2: When no. of dots are even, first half R and second L
                else
                {
                    while(i <= mid)
                    {
                        d[i++] = 'R';
                    }
                    while(i < j)
                    {
                        d[i++] = 'L';
                    }
                }
            }
            i=j++;
        }
        d=d.substr(1,n); 
        return d;   
    }
};
 