class Solution 
{
public:
    bool removeOnes(vector<vector<int>>& grid)
    {
        //Single row or column:
        if (grid.size() == 1 || grid[0].size() == 1) 
        {
            return true;
        }
        for(int i=1;i<grid.size();i++)
        {
            const auto expected=static_cast<bool>(grid[0][0]^grid[i][0]);
            for(int j=0;j<grid[i].size();j++)
            {
                if(expected!= static_cast<bool>(grid[i][j]^grid[0][j]))
                {
                    return false;
                }
            }
        }
        return true;
    }
};





