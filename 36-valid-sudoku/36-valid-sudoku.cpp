//Arrays and Hashing
//Map for rach row,column and box(3*3) is made and if the number is found twice in same row/column/box then the sudoku is not valid.
//Time Complexity = O(n^2)
//Space Complexity = O(n)
class Solution 
{
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<int,int> row[9];  
        unordered_map<int,int> col[9];
        unordered_map<int,int> box[9];
        
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                char ch = board[i][j];
                if(ch!='.' && (row[i][ch]++ > 0 || col[j][ch]++ > 0 || box[i/3+3*(j/3)][ch]++>0))
                {
                    return false;
                }
            }
        }
        return true;
    }
};

