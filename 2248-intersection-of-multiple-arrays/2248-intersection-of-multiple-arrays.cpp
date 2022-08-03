//Initialize an ordered map mp and vector vec.

//Traverse the 2D array and store the elements present with their frequency.

//Now check if the element.second (frequency) stored in the map is equal to the no. of rows in the array.

//If element.second == no. of rows then it implies that the element is present in every array.

//Push all the elements which satisfy this condition.

//Return the vector vec as it now contains the intersecting elements.
class Solution
{
public:
    vector<int> intersection(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        //int m=nums[0].size();
        vector<int> ans;
        map<int,int> mp;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                mp[nums[i][j]]++;
            }
        }
        // In the 2D array, intersection occurs when the elements are present in every row.
        // So the frequency of the element should match with the no. or rows in the 2D array.
        for(auto x:mp)
        {
            if(x.second==n)
            {
                ans.push_back(x.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};