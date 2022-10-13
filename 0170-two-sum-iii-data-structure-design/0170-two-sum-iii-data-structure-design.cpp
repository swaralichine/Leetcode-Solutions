//time complexity = O(n) (linear search)
//space complexity = O(n) (hashtable is used)
//using two pointer iteration formula
class TwoSum 
{
private:
    vector<int> nums;
    bool sorted;
    
public:
    TwoSum() 
    {
        sorted = false;
        nums.clear();
    }
    
    void add(int number) 
    {
        sorted = false;
        nums.push_back(number);
    }
    
    bool find(int value) 
    {
        
        //sort if not yet sort
        if(sorted == false)
        {
            sorted = true;
            sort(nums.begin(), nums.end());
        }
        
        //2 pointers interation method
        int low = 0;
        int high = nums.size() - 1;
        
        while(low < high)
        {
            //get the sum of the two pointer value
            int sum = nums[low] + nums[high];
            
            //value too low
            if(sum < value)
            {
                low++;
            }
            
            //value too high
            else if(sum > value)
            {
                high--;
            }
            
            //found
            else
            {
                return true;
            }
        }
        //not found
        return false;
    }
};
/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */