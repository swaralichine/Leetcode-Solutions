//Time Complexity=O(1)
//Space Complexity=O(1)
class Solution 
{
public:
    int findCenter(vector<vector<int>>& edges) 
    {
        int center;
        if(edges[1][0]==edges[0][0] || edges[1][0]==edges[0][1])
        {
            center=edges[1][0];
        }
        else if(edges[1][1]==edges[0][0] || edges[1][1]==edges[0][1])
        {
            center=edges[1][1];
        }
        return center;
    }
};



