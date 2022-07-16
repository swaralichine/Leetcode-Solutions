//DFS Approach : We first look for gates and then traverse back
//Time Complexity = O(row*column)
//Space Complexity = O(row*column)
class Solution 
{
public:
    void dfs(vector<vector<int>>& room,int i,int j, int curr)
    {
        if(i < 0 || i >= room.size() || j < 0 || j >= room[0].size() || room[i][j]=='-1')
        {
            return;
        }
        
        if(room[i][j] == min(room[i][j],curr) and curr!=0)
        {
            return;
        }
        room[i][j]=min(room[i][j],curr);
        
        dfs(room,i-1,j,curr+1);
        dfs(room,i+1,j,curr+1);
        dfs(room,i,j-1,curr+1);
        dfs(room,i,j+1,curr+1);
    
    }
    void wallsAndGates(vector<vector<int>>& rooms) 
    {
        for(int i=0;i<rooms.size();i++)
        {
            for(int j=0;j<rooms[i].size();j++)
            {
                if(rooms[i][j]==0)
                {
                    dfs(rooms,i,j,0);
                }
            }
        }
    }
};

