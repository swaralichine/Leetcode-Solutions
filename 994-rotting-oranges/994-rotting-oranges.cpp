//Time complexity=O(rc)  (O(n) where n is the number of oranges)
//Space Complexity=O(rc)
//using bfs
class Solution 
{
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        //using a queue for freshly rotten oranges
        queue<pair<int,int>> rotten;
        
        int r=grid.size();
        int c=grid[0].size();
        
        int fresh=0;
        int time=0;
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)  //if the orange is rotten
                {
                    rotten.push({i,j});  //insert it into the queue
                }
                else if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        while(!rotten.empty())
        {
            int num=rotten.size();
            
            for(int i=0;i<num;i++)
            {
                int x=rotten.front().first;
                int y=rotten.front().second;
                
                rotten.pop();
                
                if(x>0 && grid[x-1][y]==1)
                {
                    grid[x-1][y]=2;
                    fresh--;
                    rotten.push({x-1,y});
                }
                if(y>0 && grid[x][y-1]==1)
                {
                    grid[x][y-1]=2;
                    fresh--;
                    rotten.push({x,y-1});
                }
                if(x<r-1 && grid[x+1][y]==1)
                {
                    grid[x+1][y]=2;
                    fresh--;
                    rotten.push({x+1,y});
                }
                if(y<c-1 && grid[x][y+1]==1)
                {
                    grid[x][y+1]=2;
                    fresh--;
                    rotten.push({x,y+1});
                }
            }
            if(!rotten.empty())
            {
                time++;
            }
        }
        return (fresh==0) ? time : -1;
    }
};