//Time Complexity=O(Vertices+Edges)
//Make adjacency list to find the node count
//find no of components using dfs
//find no of redundant edges
//when redundant edges >= (c-1)
//edges required=(c-1)
//negative cases:
//edges < (n-1)
//redundant edges < (c-1)


class Solution 
{
public:
    void dfs(unordered_map<int,vector<int>>& adj,int current, vector<bool>& visited)
    {
        visited[current]=true;
        for(auto i:adj[current])
        {
            if(visited[i]==false)
            {
                dfs(adj,i,visited);
            }
        }
    }
    int makeConnected(int n, vector<vector<int>>& connections) 
    {
        vector<bool> visited(n,false);
        unordered_map<int,vector<int>>adj;
        
        //Step 1 : Make Adjacency list
        int edges=0;
        for(int i=0;i<connections.size();i++)
        {
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
            edges++;
        }
        
        //Step-2 : Count no of components(using dfs)
        int components=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==false)
            {
                components++;
                dfs(adj,i,visited);
            }
        }
        
        //Step-3 : Count no of edges
        if(edges < n-1)  //no of edges are less than that of MST
        {
            return -1;
        }
        int redundant=edges - ((n-1)-(components-1));
        if(redundant >=(components-1))
        {
            return (components-1);
        }
        return -1;
    }
};