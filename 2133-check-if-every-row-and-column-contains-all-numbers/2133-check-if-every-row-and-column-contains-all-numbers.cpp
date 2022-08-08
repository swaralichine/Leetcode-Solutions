//Using map to store distinct values only
class Solution 
{
public:
    bool checkValid(vector<vector<int>>& matrix)
    {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            map<int,int> mp1;
            for(int j=0;j<n;j++)
            {
                mp1[matrix[i][j]]++;
            }
            //checking for rows
            if(mp1.size() != n)
            {
                return false;
            }
        }
        for(int i=0;i<n;i++)
        {
            map<int,int> mp1;
            for(int j=0;j<n;j++)
            {
                mp1[matrix[j][i]]++;
            }
            //checking for columns
            if(mp1.size() != n)
            {
                return false;
            }
        }
        return true;
    }
};