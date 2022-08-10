//Time Complexity=O(V+E)
//Using DFS
class Solution 
{
public:
    bool iscyclic( vector<vector<int>>& adj,vector<int>& visited, int curr)
    {
        if(visited[curr]==2)
        {
            return true;       //there exists a cycle
        }
        
        visited[curr]=2;
        //using dfs on the current node
        for(int i=0;i<adj[curr].size();i++)
        {
            if(visited[adj[curr][i]]!=1)   //use dfs only if not processed
            {
                if(iscyclic(adj,visited,adj[curr][i]))
                {
                    return true;    //return true if a cycle is detected
                }
            }
        }
        //after processing all the adjacent nodes make the node=1(i.e       processed)
        visited[curr]=1;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        //make a directed graph
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++)
        {
            adj[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        
        //create a visited array to check for cyclicity
        //0 = Univisted
        //1 = processed
        //2 = processing
        vector<int> visited(numCourses,0); //initialy all are unvisited
        for(int i=0;i<numCourses;i++)
        {
            if(visited[i]==0)
            {
                if(iscyclic(adj,visited,i))    //checking for cyclicity
                {
                    return false;
                }
            }
        }
        return true;
    }
};