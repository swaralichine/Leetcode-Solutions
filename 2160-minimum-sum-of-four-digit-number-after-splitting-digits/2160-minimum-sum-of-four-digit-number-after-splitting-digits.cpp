class Solution 
{
public:
    int minimumSum(int num) 
    {
        vector<int> ans;
        while(num>0)
        {
            ans.push_back(num%10);
            num=num/10;
        }
        sort(ans.begin(),ans.end());
        int num1=ans[0]*10+ans[3];
        int num2=ans[1]*10+ans[2];
        
        return num1+num2;
    }
};



