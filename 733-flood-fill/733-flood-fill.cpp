//Time Complexity=O(n) n is the number of pixels in the image
//Space Complexity=O(n)
class Solution 
{
public:
    void flood_fill(vector<vector<int>>& image, int sr, int sc, int color, int col)
    {
        int n=image.size();
        int m =image[0].size();
        
        if(sr>=n || sr<0 || sc>=m || sc<0 ||image[sr][sc]!=col)    //checking the boundary conditions
        {
            return;
        }
        image[sr][sc]=color;  //color the cell
        
        //traverse the neighboring cells using dfs
        flood_fill(image,sr+1,sc,color,col);
        flood_fill(image,sr-1,sc,color,col);
        flood_fill(image,sr,sc+1,color,col);
        flood_fill(image,sr,sc-1,color,col);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
       int col=image[sr][sc];   //storing the color of the starting pixel
        
       if(image[sr][sc]==color)     //the starting/target pixel is same as the color to be filled with
       {
           return image;     //no need to change anything, directly return the image
       }
        flood_fill(image,sr,sc,color,col);
        return image;
    }
};
