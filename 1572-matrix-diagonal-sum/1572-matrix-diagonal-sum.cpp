class Solution
{
public:
    int diagonalSum(vector<vector<int>>& mat) 
    {
       int diagonal_sum=0;
       int n=mat.size();
        int i=0;
        int j=n-1;
        
        while(i<n)
        {
         diagonal_sum=diagonal_sum+mat[i][i]+mat[i][j];
         i++;
         j--;
        }
        if(n%2 == 0)
        {
            return diagonal_sum;
        }
        else
        {
            return diagonal_sum-mat[n/2][n/2];
        }
    }
};
