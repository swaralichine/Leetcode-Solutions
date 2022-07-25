//Dynamic Programming
//Time Complexity=O(Row*Column)
//Space Complexity=O(1)
class Solution 
{
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat)
    {
        int row=mat.size();
        if(row==0)
        {
            return mat;
        }
        int col=mat[0].size();
        
        vector<vector<int>> dist(row, vector<int>(col,INT_MAX-100000));  //creating a new matrix to store the updated distances
     
        //In first pass we check for left and top
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(mat[i][j] == 0)
                {
                    dist[i][j]=0;  //no change if the distance is zero
                }
                else
                {
                    if(i>0)
                    {
                        dist[i][j]=min(dist[i][j],dist[i-1][j]+1);
                    }
                    if(j>0)
                    {
                        dist[i][j]=min(dist[i][j],dist[i][j-1]+1);
                    }
                }
            }
        }
        //In second pass we check for right and down
        for(int i=row-1;i>=0;i--)
        {
            for(int j=col-1;j>=0;j--)
            {
                if(mat[i][j] == 0)
                {
                    dist[i][j]=0;  //no change if the distance is zero
                }
                else
                {
                 if(i < row-1)
                {
                    dist[i][j]=min(dist[i][j],dist[i+1][j]+1);
                }
                if(j < col-1)
                {
                    dist[i][j]=min(dist[i][j],dist[i][j+1]+1);
                }      
                }
            }
        }
        return dist;
    }
};