//time complexity=O(n)
//space complexity=O(1)
//linear scan
class Solution 
{
public:
    bool increasingTriplet(vector<int>& nums) 
    {
          if(nums.size() < 3)
          {
              return false;
          }
        int first_element = INT_MAX;
        int second_element = INT_MAX;
        
        for(int num : nums)
        {
            //find first small element
            if(num < first_element)
            {
                first_element=num;
            }
            //find the second element; the number greater than the first element
            if(num > first_element)
            {
                second_element = min(second_element, num);
            }
            //if the element is greater than the second element, then it should be the third element in the triplet
            if(num > second_element)
            {
                return true;
            }
        }
        return false;
    }
};