//time complexity = O(n)
class Solution 
{
public:
    vector<int> sumZero(int n) 
    {
        //declaring a vector to store the answer
        vector<int> ans;
        for(int i=1;i<=n/2;i++)
        {
            ans.push_back(i);
            ans.push_back(-i);
        }
        if(n%2==1)  //for odd number of integers
        {
            ans.push_back(0);
        }
        return ans;
    }
};
