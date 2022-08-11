class Solution 
{
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
    {
        //creating max heap
          priority_queue<int> pq;
          int i=0;
        
          for(i;i<heights.size()-1;i++)
          {
              if(heights[i+1]<=heights[i])
              {
                  continue;
              }
              int diff=heights[i+1]-heights[i];
              if(diff<=bricks)    //we first use all bricks
              {
                  bricks-=diff;
                  pq.push(diff);   //we are using bricks=diff only
              }
              else if(ladders>0)  //else if we have no bricks and only ladders
              {
                  if(pq.size()!=0)
                  {
                      int x=pq.top();
                      if(x > diff)
                      {
                          bricks=bricks+x;
                          pq.pop();
                          pq.push(diff);
                          bricks=bricks-diff;
                      }    
                  }
                  ladders--;
              }
              else
              {
                  break;   //we don't have bricks and ladders
              }
          }
        return i;
    }
};