//time complexity = O(n)  //we just need to iterate over colors and needtime
//space complexity = O(1)  //we are using only two values totaltime and currmaxtime
// totalTime: total time needed to make rope colorful;
// currMaxTime: maximum time of a balloon needed in this group.
class Solution 
{
public:
    int minCost(string colors, vector<int>& neededTime) 
    {
        int totaltime=0;
        int currmaxtime=0;
        
         // For each balloon in the array:
        for(int i=0;i<colors.size();i++)
        {
          // If this balloon is the first balloon of a new group
          // set the currMaxTime as 0.  
            if(i > 0 && colors[i] != colors[i-1])
            {
                currmaxtime=0;   
            }
            // Increment totalTime by the smaller one.
            // Update currMaxTime as the larger one.
            totaltime = totaltime + min(currmaxtime,neededTime[i]);
            currmaxtime = max(currmaxtime, neededTime[i]);
        }
        return totaltime;
    }
};