//Use the HashMap to check if the other element i.e. target-(selected element) exists.
//we will store the element along will its index in the HashMap. Thus we can easily retrieve the index of the other element i.e. target-(selected element) without iterating the array.

//Approach
//We will select the element of the array one by one using a loop(say i).
//Then we will check if the other required element(i.e. target-arr[i]) exists in the hashMap.

//If that element exists, we will return the current index i.e. i, and the index of the element found using map i.e. mp[target-arr[i]].

//If that element does not exist, then we will just store the current element in the hashMap along with its index. Because in the future, the current element might be a part of our answer.

//Finally, if we are out of the loop, that means there is no such pair whose sum is equal to the target. In this case, we will return {-1, -1} as per the variant of the question.

//Complexity
//Time complexity:
//O(N)

//Space complexity:
//O(N)  since we are using hashmap

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> result;
        int n = nums.size();
        
        map<int, int> mp;
        
        for(int i = 0; i<n ; i++)
        {
            int required = target - nums[i];
            if(mp.find(required) != mp.end())  //if the element is found
            {
                return {mp[required], i};
            }
            mp[nums[i]] = i; 
        }
        return {-1,-1};   //elements not found
    }
};