//Time Complexity=O(nlogn) (for sorting)
//Space Complexity=O(n)  (for min heap)
//basically need to find how many intervals are overlapping 
class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        sort( intervals.begin() , intervals.end() );
        priority_queue < int , vector < int > , greater< int >> q;
        int n = intervals.size();
        q.push(intervals[0][1]);
        for(int i=1;i<n;i++)
        {
            int t = q.top();
            if( intervals[i][0]>=t)
            {
                q.pop();
            }
            q.push(intervals[i][1]);
        }
        return q.size();
    }
};