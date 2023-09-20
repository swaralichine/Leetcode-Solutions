//Time Complexity=O(nlogn) (for sorting)
//Space Complexity=O(n)  (for min heap)
class Solution 
{
public:
    int minMeetingRooms(vector<vector<int>>& intervals) 
    {
        sort( intervals.begin() , intervals.end() );
        
        priority_queue < int , vector < int > , greater< int >> q;   //min-heap
        
        int n = intervals.size();
        
        q.push(intervals[0][1]);   //end time
        
        for(int i=1;i<n;i++)
        {
            int t = q.top();
            if( intervals[i][0]>=t)    //start time
            {
                q.pop();
            }
            q.push(intervals[i][1]);  //again store the end time
        }
        return q.size();
    }
};