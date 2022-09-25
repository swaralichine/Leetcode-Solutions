class Solution 
{
public:
    string removeDuplicates(string s) 
    {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(ans.size() !=0 && ans.back() == ch)
            {
                ans.pop_back();  //remove the duplicate character
            }
            else
            {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
