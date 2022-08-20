//using BFS
class Solution
{
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) 
    {
        int row=maze.size();
        int col=maze[0].size();
        
        if(maze[entrance[0]][entrance[1]]=='+')  //if the entrance has a wall
        {
            return -1;
        }
        //using BFS
        queue<pair<int,int>> q;
        
        q.push({entrance[0],entrance[1]});
        
        //marking the entrance visited
        maze[entrance[0]][entrance[1]]='+';
        int min_dist=-1;
        
        while(!q.empty())
        {
            min_dist++;
            int qsize=q.size();
            
            for(int i=0;i<qsize;i++)
            {
                auto node=q.front();
                q.pop();
                
                int x=node.first;
                int y=node.second;
                
                if(((x==row-1 || x==0) || (y==col-1 || y==0)) && min_dist!=0)  //reached the boundary
                {
                    return min_dist;
                }
                
                //checking all the boundary rows and cols
                if(x+1<row && maze[x+1][y]!='+')
                {
                    //mark it visited/wall
                    maze[x+1][y]='+';
                    q.push({x+1,y});
                }
                if(x-1>=0 && maze[x-1][y]!='+')
                {
                    //mark it visited/wall
                    maze[x-1][y]='+';
                    q.push({x-1,y});
                }
                if(y+1<col && maze[x][y+1]!='+')
                {
                    //mark it visited/wall
                    maze[x][y+1]='+';
                    q.push({x,y+1});
                }
                if(y-1>=0 && maze[x][y-1]!='+')
                {
                    //mark it visited/wall
                    maze[x][y-1]='+';
                    q.push({x,y-1});
                }
            }
        }
        return -1;
    }
};