//DFS traversal
//Time complexity=O(n*n)
//Space Complexity =O(1)
class Solution 
{
public:
    void dfs(vector<vector<int>>& isConnected,int i,int j)
    {
        isConnected[i][j]=0;
        
        //all elements connected with isConnected[i][j]
        for(auto k=0;k<isConnected.size();k++)
        {
            if(isConnected[j][k]==1)
            {
                dfs(isConnected,j,k);
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
      int maxprov=0;
        for(auto i=0;i<isConnected.size();i++)
        {
            for(auto j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1)
                {
                    maxprov++;
                    dfs(isConnected,i,j);
                }
            }
        }
        return maxprov;
    }
};