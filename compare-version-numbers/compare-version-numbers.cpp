//Time Complexity=O(m+n)  m,n=lengths of two strings
//Space Complexity=O(1)
class Solution 
{
public:
    int compareVersion(string version1, string version2) 
    {
        int i=0;
        int j=0;
        
        int n=version1.size();
        int m=version2.size();
        
        while(i<n || j<m)
        {
            int n1=0;
            int n2=0;
            
            while(i<n && version1[i]!='.')
            {
                n1=n1*10+(version1[i]-'0');
                i++;
            }
            while(j<m && version2[j]!='.')
            {
                n2=n2*10+(version2[j]-'0');
                j++;
            }
            if(n1>n2)
            {
                return 1;
            }
            else if(n2>n1)
            {
                return -1;
            }
            i++;
            j++;
        }
        return 0;
    }
};