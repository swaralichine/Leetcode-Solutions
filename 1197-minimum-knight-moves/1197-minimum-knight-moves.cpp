class Solution {
public:
    int minKnightMoves(int x, int y) {
        return dfs(abs(x), abs(y));
    }
    
    int dfs(int x, int y) { // x, y >= 0;
        if(x + y == 0) return 0;
        else if(x + y == 2) return 2;
        else{
            if(memo[x][y] == 0) memo[x][y] = min(dfs(abs(x - 1), abs(y - 2)), dfs(abs(x - 2), abs(y - 1))) + 1;
            return memo[x][y];
        };
    }
    
private:
    int memo[301][301];
};