//Using Priority Queue
//Using PQ because the highest priority stone will be at the top always
class Solution 
{
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        //Declaring a priority queue
      priority_queue<int> pq;
      for(auto s:stones)
      {
          pq.push(s);
      }
    
        //Traversing the priority queue
      while(pq.size() > 1)
      {
          //declaring stone1
          int st1=pq.top();
          pq.pop();
          
          //decalring stone2
          int st2=pq.top();
          pq.pop();
          
          //finding the difference between them
          st1=st1-st2;
          
          if(st1>0)
          {
              pq.push(st1);
          }
      }
      //queue is empty means no stones left(last two stones were of same weight)  
      if(pq.empty())
      {
          return 0;
      }
      else
      {
          return pq.top();
      }
    }
};
