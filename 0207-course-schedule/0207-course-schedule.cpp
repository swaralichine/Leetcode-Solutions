#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class Solution {
private:
    bool dfs(int i, unordered_map<int, vector<int>>& premap, unordered_set<int>& visited, vector<bool>& dp) {
        if (visited.count(i)) return dp[i];
        visited.insert(i);
        if (premap[i].empty()) {
            dp[i] = true;
            return true;
        }
        for (int neighbor : premap[i]) {
            if (!dfs(neighbor, premap, visited, dp)) return false;
        }
        dp[i] = true;
        return true;
    }

public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        unordered_map<int, vector<int>> premap;
        for (auto& p : prerequisites) {
            premap[p[0]].push_back(p[1]);
        }

        unordered_set<int> visited;
        vector<bool> dp(numCourses, false);

        for (auto& entry : premap) {
            if (!dfs(entry.first, premap, visited, dp)) return false;
        }
        return true;
    }
};