//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    bool judgeCircle(string moves) 
    {
        int x=0;
        int y=0;
        
        for(int i=0;i<moves.length();i++)
        {
            if(moves[i]=='R')
            {
                x++;
            }
            if(moves[i]=='L')
            {
                x--;
            }
            if(moves[i]=='U')
            {
                y++;
            }
            if(moves[i]=='D')
            {
                y--;
            }
        }
        return x==0 && y==0;
    }
};


