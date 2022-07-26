
class Solution 
{
public:
    bool ans = false;
    void DFS(vector<int>edges[], int source, int destination,vector<bool>&visited)
    {
        visited[source] = true;
        //whenever we find our source and destination both are equal that means a path exist b/w them.
        if(source == destination) ans = true;
        for(auto child : edges[source])
        {
            if(visited[child] == false)
            {
                DFS(edges,child,destination,visited);
            }
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) 
    {
        vector<int> Graph[n];
        
        //Creating the Adjacency List.
        for(int i=0;i<edges.size();i++)
        {
            Graph[edges[i][0]].push_back(edges[i][1]);
            Graph[edges[i][1]].push_back(edges[i][0]); 
        }
        //taking a visited array to keep track which node has been visited.
        vector<bool> visited(n,false);
        //Calling a DFS fuction by passing Graph, source, destination, visited.
        DFS(Graph,source,destination,visited);
        return ans;
    }
};