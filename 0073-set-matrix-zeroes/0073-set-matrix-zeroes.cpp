//Time Complexity=O(row*column)
//Space Complexity=O(1)
//We use first cell of every row and column as a flag
//This flag would determine whether a row or column has been set to zero
//Hence instead of going to row+col cells and setting it to zero we just set the flag in two cells to zero
class Solution 
{
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
       int n=matrix.size();
       int m=matrix[0].size();
        
       bool first_row=false;
       bool first_column=false;
        
       //checking for first column
       for(int i=0;i<n;i++)
       {
           if(matrix[i][0]==0)
           {
               first_column=true;
               break;
           }
       }
       //checking for first row
       for(int j=0;j<m;j++)
       {
           if(matrix[0][j]==0)
           {
               first_row=true;
               break;
           }
       }
       //start traversing from row=1,column=1 and set all row and column elements to zero
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        //checking if any of the row or column element is zero
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[0][j]==0 || matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        //check for first row and column
        if(first_row==true)
        {
            for(int i=0;i<m;i++)
            {
                matrix[0][i]=0;
            }
        }
        if(first_column==true)
        {
            for(int j=0;j<n;j++)
            {
                matrix[j][0]=0;
            }
        }
    }
};