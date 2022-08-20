//time complexity=O(mn)
//space complexity=O(1)
//using DFS
class Solution 
{
public:
    void dfs(vector<vector<char>>& board,int i,int j)
    {
        //checking the boundary conditions and if the cell is empty
       if(i < 0 || j < 0 || i >= board.size() || j >=board[0].size() || board[i][j]=='.')
       {
           return;
       }
        board[i][j]='.';  //marking as visited to not visit it again
        
        //appllying dfs horizontal and vertical
        dfs(board,i+1,j);
        dfs(board,i,j+1);
        
    }
    int countBattleships(vector<vector<char>>& board) 
    {
        int no_of_battleships=0;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X')
                {
                    no_of_battleships++;
                    //apply dfs 
                    dfs(board,i,j);
                }
             }
         }
        return no_of_battleships;
    }
};