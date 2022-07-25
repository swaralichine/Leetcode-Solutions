//Flood Fill Algorithm
//First find the coordinates of the two islands and store them in a vector
//Then find the shortest distance between the two vectors
class Solution {
public:
    void dfs(vector<vector<int>>& A, int i, int j, vector <pair<int, int>> &r)
    {
        //checking boundary conditions
        if(i < 0 || j < 0 || i >= A.size() || j >= A[i].size() || A[i][j]==0)
            return;
        //not to traverse again
        
        A[i][j] = 0;
        
        //putting the coordinates into the respective matrices
        r.push_back(make_pair(i,j));
        
        //traversing the nearby cells
        dfs(A, i+1, j, r);
        dfs(A, i-1, j, r);
        dfs(A, i, j-1, r);
        dfs(A, i, j+1, r);
        return;
    }
    int shortestBridge(vector<vector<int>>& A) {
        int count = 0; //to count the island
        vector <pair<int, int>> x;  //to store the coordinates of first island
        vector <pair<int, int>> y; // to store the coordinates of second island
        for(int i=0; i<A.size(); i++)
        {
            for(int j=0; j<A[i].size(); j++)
            {
                if(A[i][j] == 1)
                {
                    count++;
                    if(count == 1)
                    {
                        dfs(A, i, j, x);   
                    }
                    if(count == 2)
                    {
                        dfs(A, i, j, y);   
                    }   
                }
            }
        }
        //finding the minimum distance
        int min_dist = INT_MAX;
        for(int i=0; i<x.size(); i++)
        {
            for(int j=0; j<y.size(); j++)
            {
                //paired hence first and second
                int dist = abs(x[i].first - y[j].first) + abs(x[i].second - y[j].second) - 1;
                if(dist < min_dist)
                    min_dist = dist;
            }
        }
        return min_dist;
    }
};