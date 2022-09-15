class Solution {
public:
    vector<int> findOriginalArray(vector<int> &changed) {
        queue<int> q;
        vector<int> result;
        sort(changed.begin(), changed.end());
		
        for (int &i : changed) {
            if (q.front() != i) {
                result.push_back(i);
                q.push(i * 2);
            }
            else
                q.pop();
        }
        
        if (!q.empty())
            return {};
        return result;
    }
};