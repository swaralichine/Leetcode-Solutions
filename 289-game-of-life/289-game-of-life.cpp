//time complexity=O(mn)
//space complexity=O(1)
class Solution
{
public:

    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                int count = 0; // count live neighbors
                //check neighbors
                if(i!=0 && abs(board[i-1][j]) == 1)count++;//check top
                if(i!=m-1 && abs(board[i+1][j]) == 1)count++;//check bottom
                if(j!=0 && abs(board[i][j-1]) == 1)count++;//check left
                if(j!=n-1 && abs(board[i][j+1]) == 1)count++;//check right
                if(i!=0 && j!=0 && abs(board[i-1][j-1]) == 1)count++;//check top left
                if(i!=m-1 && j!=n-1 && abs(board[i+1][j+1]) == 1)count++;//check bottom right
                if(i!=0 && j!=n-1 && abs(board[i-1][j+1]) == 1)count++;//check top right
                if(i!=m-1 && j!=0 && abs(board[i+1][j-1]) == 1)count++;//check bottom left
                
                // if 1
                if(abs(board[i][j]) == 1){
                    if(count < 2 || count > 3)board[i][j] = -1;//change 1 to -1 for future referencing, which will be changed to 0 later
                }
                else{
                    if(count == 3)board[i][j] = 2;//change 0 to 2 for future referencing which will be changed to 1 later
                }
            }
        }
        //update -1 -> 0 and 2 -> 1
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == -1)board[i][j] = 0;
                else if(board[i][j] == 2)board[i][j] = 1;
            }
        }
    }
};