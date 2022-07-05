//Logic is to store frequencies of occurences of elements
//Then perform priority queue operation to get max heap based on to get the top k frequent elements
//Time Complexity = O(n)
//Space Complexity = O(1)

class Solution 
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> freq;   //declaring a map to store the values
        
        for(int x:nums)     //storing the frequencies of elements
        {
            freq[x]++;
        }

        vector<int> ans;    //storing the answer
        
        priority_queue<pair<int,int>> pq;  //declaring the priority queue for getting top k                                                    frequent elements
    
        for(auto x:freq)        //using priority queue for storing the elements with their freq                                     first
        {
            pq.push({x.second,x.first});
        }
        
        while(k--)      //popping the top k frequent elements from the priority queue
        {
            ans.push_back(pq.top().second),pq.pop();
        }
        return ans;
    }
};