//Time Complexity=O(nlogn) (for sorting)
//Space Complexity=O(n)  (for min heap)
class Solution 
{
public:
    int minMeetingRooms(vector<vector<int>>& intervals) 
    {
        //sort by starting time intervals
        sort(intervals.begin(),intervals.end());
        //declaring a priority queue for storing the minimum rooms               required
        priority_queue<int, vector<int>, greater<int>> pq;
        //storing the first interval in the priority queue
        pq.push(intervals[0][1]);
        
        for(int i=1;i<intervals.size();i++)
        {
            vector<int>& v=intervals[i];
            //comparing the top-most element on priority queue with the               intervals start time
             if(v[0] >= pq.top())
             {
                 pq.pop();
                 pq.push(v[1]);   //push its end time
             }
            else
            {
                pq.push(v[1]);
            }
        }
        return pq.size();
    }
};
