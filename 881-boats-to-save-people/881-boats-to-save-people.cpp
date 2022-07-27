//Time Complexity=O(nlogn)
//Space Complexity=O(logn)
class Solution 
{
public:
    int numRescueBoats(vector<int>& people, int limit) 
    {
        sort(people.begin(),people.end());
        int min_boats=0;
        int left=0;
        int right=people.size()-1;
        
        while(left<=right)
        {
            //because at max two people are allowed on the boat
            min_boats++;
            if(people[left]+people[right] <=limit)
            {
                left++;
            }
            right--;
        }
        return min_boats;
    }
};