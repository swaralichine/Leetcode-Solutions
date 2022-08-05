class Solution
{
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int X=0;
        for(int i=0;i<operations.size();i++)
        {
            if(operations[i] == "--X" || operations[i] == "X--")
            {
                X=X-1;
            }
            if(operations[i] == "++X" || operations[i] == "X++")
            {
                X=X+1;
            }
        }
        return X;
    }
};