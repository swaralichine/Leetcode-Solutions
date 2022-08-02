//Time Compexity=O(n) where n is the total number of elements in the iamge
//Space Complexity=O(1)
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) 
    {
        for(auto& row:image)
        {
            reverse(row.begin(),row.end());
            for(auto& i:row)
            {
                i=i^1;
            }
        }
        return image;
    }
};

