class Solution 
{
public:
string solve(string s)
{
	int n = s.length();
    string ans="";
    
    for(int i=0;i<n;)
    {
        char ch=s[i];
        int cnt=0;
        while(i < n && s[i]==ch)
            i++,cnt++;
        ans.push_back(cnt+'0');
        ans.push_back(ch);
    }
    return ans;
}

string countAndSay(int n) 
    {
        if(n==1)
            return "1";
       string temp= countAndSay(n-1); 
        return solve(temp);
    }
};