class Solution 
{
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) 
    {
        //declare a map to store count of each type of position difference
        map<pair<int,int>,int> mp;
        
        //declare vector to store indices of 1s in both images
        vector<pair<int,int>> v1,v2;
        
        //ans to store the final answer
        int ans=0;
        
        //store the indices of 1s in both the images
        for(int i=0;i<img1.size();i++)
        {
            for(int j=0;j<img1[0].size();j++)
            {
                if(img1[i][j])
                {
                    v1.push_back({i,j});
                }
                if(img2[i][j])
                {
                    v2.push_back({i,j});
                }
            }
        }
        //calculate the position difference of each '1' from 1st image with every '1' from 2nd image and increment count
        for(auto [i1,j1] : v1)
        {
            for(auto [i2,j2] : v2)
            {
                mp[{i1-i2,j1-j2}]++;
                //store the maximum count we found so far
                ans = max(ans,mp[{i1-i2,j1-j2}]);
            }
        }
        return ans;
    }
};