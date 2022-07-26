//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    bool isRobotBounded(string instructions) 
    {
        //hashmap giving the new directions in which we will be facing
        unordered_map<char,pair<char,char>> dir{{'N',{'W','E'}}, {'S',{'E','W'}} , {'E',{'N','S'}}, {'W',{'S','N'}}};
        
        //hash map giving change in coordinates after moving in particular direction
        unordered_map<char,pair<int,int>> moves{{'N',{0,1}}, {'S',{0,-1}}, {'E',{1,0}}, {'W',{-1,0}}};
        
        //initial position of the robot
        int i=0;
        int j=0;
        
        //initial facing direction
        char facing='N';
        
        for(auto c : instructions)
        {
            if(c=='L')
            {
                facing=dir[facing].first;
            }
            else if(c=='R')
            {
                facing=dir[facing].second;
            }
            else if(c=='G')
            {
                i=i+moves[facing].first;
                j=j+moves[facing].second;
            }
        }
        if(i==0 && j==0)
        {
            return true;
        }
        return facing!='N';
    }
};