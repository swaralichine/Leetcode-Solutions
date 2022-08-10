//Time Complexity=O(V+E)
//Using Topological sort
//TS only works when DAG
//Using stck+visited array
//create DGA->check for cycles->if not then create topological sort order else return empty array
class Solution 
{
public:
    bool detect_cycle_until(vector<vector<int>>& adj, vector<int>& visited,int v)
    {
        if(visited[v]==1)
        {
            return true;
        }
        if(visited[v]==2)
        {
            return false;
        }
        
        visited[v]=1; //mark current as visited
        for(int i=0;i<adj[v].size();i++)
        {
            if(detect_cycle_until(adj,visited,adj[v][i]))
            {
                return true;
            }
        }
        visited[v]=2;  //mark current node as processed
        return false;
    }
    //cycle detection
    bool detectcycle(vector<vector<int>>& adj,int n)
    {
        vector<int> visited(n,0);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
              if(detect_cycle_until(adj,visited,i))
                {
                    return true;
                }   
            }
        }
        return false;
    }
    //topoogical sort
    void dfs(vector<vector<int>>& adj,int v,vector<bool>& visited,stack<int>& mystack)
    {
        visited[v]=true;
        //applying dfs on the adjacency list
        for(int i=0;i<adj[v].size();i++)
        {
            if(!visited[adj[v][i]])
            {
                dfs(adj,adj[v][i],visited,mystack);
            }
        }
        mystack.push(v);    //backtracking after all the connected elements have been visited
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites)     
    {
        int n=prerequisites.size();
        //make adjacency list
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<n;i++)
        {
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        //detect cycle, if present return empty array
        vector<int> ans;
        if(detectcycle(adj,numCourses))
        {
            return ans;
        }
        
        //find topological sort and store it in a stack
        stack<int> mystack;
        vector<bool> visited(numCourses,false);
        
        //apply DFS and find topological sort
        for(int i=0;i<numCourses;i++)
        {
            if(!visited[i])
            {
                dfs(adj,i,visited,mystack);
            }
        }
        //push the elements from stack onto the vector ans
        while(!mystack.empty())
        {
            ans.push_back(mystack.top());
            mystack.pop();
        }
        return ans;
    }
};