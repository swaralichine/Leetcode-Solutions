//using bfs
class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        auto m = grid.size();
        auto n = grid[0].size(); // get rows and cols
        
        // directions
        vector<vector<int>> directions = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        
        // keep track of ks
        vector<vector<int>> kvalues = vector(m, vector(n, -1));
        
        // queue for BFS
        queue<vector<int>> que;
        que.push({0, 0, k, 0}); // row, col, remaining ks, distance
        
        // BFS
        while(!que.empty()){
            auto e = que.front();
            que.pop();
            
            int r = e[0]; // current row
            int c = e[1]; // current column
            int currentk = e[2]; // current remaining k value
            int dist = e[3]; // current dist from beginning position(0, 0)
            
            if(r == m-1 && c == n-1)return dist; // reach the ending position (m-1, n-1)
            
            if(grid[r][c] == 1)currentk -= 1; // if current position is an obstacle, remove it, update remaining k
            
            // for all possible directions, add the valid ones to the que
            for(const auto& direction : directions){
                int nextr = r + direction[0];
                int nextc = c + direction[1];
                
                // if subscripts are in bound and current k beats next k - update the next k to current k
                if(nextr >= 0 && nextr < m && nextc >= 0 && nextc < n && currentk > kvalues[nextr][nextc]){
                    que.push({nextr, nextc, currentk, dist+1});
                    kvalues[nextr][nextc] = currentk; // update remaining k to current k
                }
            }
            
        }
        
        return -1; // if not found such a path,  return -1
        
    }
};