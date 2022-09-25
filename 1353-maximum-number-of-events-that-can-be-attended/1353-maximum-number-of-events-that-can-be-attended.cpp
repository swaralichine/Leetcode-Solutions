//using priority queue
class Solution 
{
public:
    int maxEvents(vector<vector<int>>& nums) {
        
        // Intuition -> we are checking for all the possible days 
        
        // from day 1 to day 10^5 
        
        // I had think solution pretty well , but was little confused to 
        
        // how to tackle days properly , then see the constraint 
        
        // then i thinked of using all in a for loop
        
        // Firstly for given day - d , 
        
        // for a given day - d , we should insert all the ending day in the min heap
        
        // Now delete one of the days as it has been attended.
        
        
        priority_queue< int , vector<int> , greater<int>> pq;
        
        sort(nums.begin() , nums.end());
        
        int ans=0 , i=0;
        
        for(int d=1;d<=100000;d++)
        {
            // check in the pq that some intervals are expiredi.e end_day < curr_day(d)
            
            while(!pq.empty() && d>pq.top())
            {
                pq.pop();
            }
            
            // Now insert all the intervals which has starting day as (d)
            
            while(i<nums.size() && nums[i][0]==d)
            {
                pq.push(nums[i][1]);
                i++;
            }
            
            if(!pq.empty())
            {
                pq.pop();
                ans++;
            }
            
            if(pq.empty() && i==nums.size())
            {
                break;
            }
            
        }
        return ans;
    }
};