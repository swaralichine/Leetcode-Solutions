//1. Create two different arrays for each digit and letter.
//2. check for first blank space and seprate the identifiers and (letters and digits) in two different strings. (say s, t).
//3. If the string is letter push it into letter array in reverse order.(to sort the letters not indentifier)
//4. Same goes with digit array.
//5. Now sort the letters array.
//6. And push the final answer into final vector.

class Solution
{
public:
    vector<string> reorderLogFiles(vector<string>& logs) 
    {
        vector<pair<string, string>> dig;
        vector<pair<string, string>> let;
        
        for(auto i : logs)
        {
            bool flag = false;
            string s = "";
            string t = "";
            for(int j = 0; j < i.size(); j++)
            {
                if(i[j] == ' ' && flag == false) //first blank space
                {
                    flag = true;
                    continue;
                }
                if(flag == false) 
                    s += i[j];
                else
                    t += i[j];
             }
                if(t[0] >= 'a' && t[0] <= 'z')  //check for letters
                    let.push_back({t, s});
                else
                    dig.push_back({t, s});  //check for digits
        }
        sort(let.begin(), let.end());
        
            vector<string> ans;
            for(auto i : let)
                ans.push_back(i.second + " " + i.first);
            for(auto i : dig)
                ans.push_back(i.second + " " + i.first);
        return ans;
        }
};