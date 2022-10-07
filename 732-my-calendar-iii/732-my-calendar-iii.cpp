/**add start and end by inc and dec. it resp.
all are in sorted bacause here use map
calculate max consucative sum i.e overlap
return overlap
Complexity
Time complexity:O(n)
Space complexity:O(n)**/

class MyCalendarThree 
{
public:
    int maxbooking=0;
    map<int,int> mp;
    
    MyCalendarThree() 
    {
          
    }
    
    int book(int start, int end) 
    {
        //store the start and end times into the map and increase their count as and when you encounter them
        mp[start]++;
        mp[end]--;
        
        int overlap=0;
        for(auto it:mp)
        {
            overlap = overlap + it.second;
            maxbooking = max(maxbooking, overlap);
        }
        return maxbooking;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */