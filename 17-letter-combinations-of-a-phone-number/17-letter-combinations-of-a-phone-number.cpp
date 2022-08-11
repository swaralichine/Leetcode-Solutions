class Solution 
{
public:
    map<char,vector<string>> mp;
    vector<string> ans;
    
    void solve(int start,string digits,string current)
    {
        if(digits.size()==start)
        {
            ans.emplace_back(current);
        }
        vector<string> vec=mp[digits[start]]; //for 3 vec=['d','e','f']
        for(int i=0;i<vec.size();i++)
        {
            string s=vec[i];
            current=current+s;
            solve(start+1,digits,current);
            //backtracking step - to remove the last element and do combinations with the first element
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        if(digits.size()==0)
        {
            return ans;
        }
        
        mp['2']={"a","b","c"};
        mp['3']={"d","e","f"};
        mp['4']={"g","h","i"};
        mp['5']={"j","k","l"};
        mp['6']={"m","n","o"};
        mp['7']={"p","q","r","s"};
        mp['8']={"t","u","v"};
        mp['9']={"w","x","y","z"};
        
        solve(0,digits,"");  //0 to keep track of the digit we are on
        return ans;
    }
};