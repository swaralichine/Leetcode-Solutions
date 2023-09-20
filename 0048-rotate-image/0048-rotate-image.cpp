//Time Complexity=O(n*n)
//Space Complexity=O(1)
//First find the transpose of the matrix
//Then reverse every row
class Solution 
{
    public:
    void rotate(vector<vector<int>>& matrix)
    {

        int n = matrix.size();

        // transpose matrix
        for (int i = 0; i < n; i++) 
        {
            for (int j = i; j < n; j++) 
            {
                int tmp = matrix[j][i];  //temporarily store value of column in variable temp
                matrix[j][i] = matrix[i][j];   //put column value as row
                matrix[i][j] = tmp;     //put column value stored in temp as row value now
            }
        }

        // reverse each row
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n / 2; j++) 
            {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[i][n - j - 1];
                matrix[i][n - j - 1] = tmp;
            }
        }
    }
};