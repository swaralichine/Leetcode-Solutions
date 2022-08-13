/*So we can solve this using brute force where we add an element to the array and sort it in descending order and then find the kth largest element. This will take O(nlogn) time and O(n) space.

Or we can use a priority queue where adding and removing an element takes O(logn) time.
The priority queue has to be of size k and the topmost element of the queue is the kth largest element.

Eg:
   3, [4, 5, 8, 2]
   Priority queue(min-heap) will be like [2,4,5,8]
   Now size of queue = 4 , so we remove 2. Now queue is [4,5,8]
   3rd largest element is topmost element, i.e. ,4
   
   Add(5)
   Priority queue(min-heap) will be like [4,5,5,8]
   Now size of queue = 4 , so we remove 4. Now queue is [5,5,8]
   3rd largest element is topmost element, i.e. ,5
   
   Add(10)
   Priority queue(min-heap) will be like [5,5,8,10]
   Now size of queue = 4 , so we remove 5. Now queue is [5,8,10]
   3rd largest element is topmost element, i.e. ,5
   
   Add(9)
   Priority queue(min-heap) will be like [5,8,9,10]
   Now size of queue = 4 , so we remove 5. Now queue is [8,9,10]
   3rd largest element is topmost element, i.e. ,8
   
    Add(4)
   Priority queue(min-heap) will be like [4,8,9,10]
   Now size of queue = 4 , so we remove 4. Now queue is [8,9,10]
   3rd largest element is topmost element, i.e.,8
   */
//time complexity=O(logn) 
//space complexity=O(n)  using min heap
class KthLargest 
{
public:
    int k;
    priority_queue<int,vector<int>,greater<int> > pq;
        
    KthLargest(int k, vector<int>& nums) 
    {
        
       this -> k = k;
        
        if(nums.size() == 0)   
            return;
        
        for(auto it: nums)
            pq.push(it);
        
        while(pq.size()>k)
            pq.pop();
        
    }
    
    int add(int val) 
    {
        
        pq.push(val);
        
        while(pq.size()!=k)
            pq.pop();
        
        return pq.top();
        
    }
};
