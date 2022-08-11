//we are using two pointers here:left and right
class Solution 
{
public:
    void generate(int left, int right, int n,string str,vector<string>& ans)
    {
        if(left==n && right==n)
        {
            ans.push_back(str);
        }
        if(left<n)
        {
            generate(left+1,right,n,str+'(',ans);
        }
        if(left>right && right<n)
        {
            generate(left,right+1,n,str+')',ans);
        }
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> ans;
        generate(0,0,n,"",ans);
        return ans;
    }
};
