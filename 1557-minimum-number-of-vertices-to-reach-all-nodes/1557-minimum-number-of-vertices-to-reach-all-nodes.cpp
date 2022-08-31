//time complexity=O(n)
class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges)
    {
        vector<int> ans;
        vector<int> indegree(n,0);
        
        for(int i=0;i<edges.size();i++)
        {
            int v=edges[i][1];   //where we can reach from that edge
            indegree[v]++;   //means that node can be reached
        }
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==0)   //no node is able 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
