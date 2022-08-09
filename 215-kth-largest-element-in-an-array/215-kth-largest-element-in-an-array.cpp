//Using priority queue to store the highest element first
//Time Complexity=O(nlogk)
//Space Complexity=O(logk)
class Solution 
{
public:
    int findKthLargest(vector<int>& nums, int k) 
    {
        priority_queue<int, vector<int> , greater<int>> pq;
        for(int num : nums)
        {
            pq.push(num);
            //the number at the top of the priority queue is our answer
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        return pq.top();
    }
};


