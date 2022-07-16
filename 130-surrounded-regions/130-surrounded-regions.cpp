//DFS Approach
//Time Complexity = O(row*column)
class Solution 
{
public:
    void dfs(vector<vector<char>>& board, int row, int col, int i, int j)
    {
        if(i<0||i>=row||j<0||j>=col|| board[i][j]!='O')
            return;
        
        board[i][j]='S';
        
        dfs(board,row,col,i+1,j);
        dfs(board,row,col,i-1,j);
        dfs(board,row,col,i,j+1);
        dfs(board,row,col,i,j-1);
    }
    void solve(vector<vector<char>>& board) 
    {
        int row= board.size();
        int col= board[0].size();
        for(int i=0; i<row; i++)
        { 
            for(int j=0; j<col; j++)
            {
               if(i==0||j==0|| i==row-1||j==col-1) //boundary cells
               {
                   dfs(board,row,col,i,j);
               }
            }
         }
        for(int i=0; i<row; i++)  //check for inside cells
        { 
            for(int j=0; j<col; j++)
            {
               if(board[i][j]=='O')
               {
                   board[i][j]='X';
               }
               if(board[i][j]=='S')
               {
                   board[i][j]='O';
               }
            }
         }
        return;
    }
};