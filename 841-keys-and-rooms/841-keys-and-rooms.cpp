//BFS Approach
class Solution 
{
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        int n=rooms.size(); //total number of rooms
        
        vector<bool> visited(n,false);  //initially all rooms are unvisited
        
        //since we are using BFS:queue
        queue<int> q;
        
        //we start from the first room
        q.push(0);
        
        //traverse till the queue is not empty
        while(!q.empty())
        {
            //storing the key value
            int roomid=q.front();
            q.pop();
            
            visited[roomid]=true;
            
            //traversing the keys in the roomid found
            for(int go : rooms[roomid])
            {
                if(visited[go]==false)
                {
                    q.push(go);
                }
            }
        }
        //checking if any room is not visited
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                return false;
            }
        }
        return true;
    }
};