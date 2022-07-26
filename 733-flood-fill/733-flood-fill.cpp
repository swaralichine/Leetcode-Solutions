//Time Complexity=O(n)
//Space Complexity=O(n)
class Solution 
{
public:
    void flood_fill(vector<vector<int>>& image, int sr, int sc, int color, int col)
    {
        int n=image.size();
        int m =image[0].size();
        
        if(sr>=n || sr<0 || sc>=m || sc<0 ||image[sr][sc]!=col)
        {
            return;
        }
        image[sr][sc]=color;
        flood_fill(image,sr+1,sc,color,col);
        flood_fill(image,sr-1,sc,color,col);
        flood_fill(image,sr,sc+1,color,col);
        flood_fill(image,sr,sc-1,color,col);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
       int col=image[sr][sc];
       if(image[sr][sc]==color)
       {
           return image;
       }
        flood_fill(image,sr,sc,color,col);
        return image;
    }
};
