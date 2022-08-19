//time complexity=O(n^2) (TC can be improved)
//space complexity=O(1)
class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans="";
        for(int i=0;i<strs[0].size();i++)    //comparing with first word only
        {
            for(int j=1;j<strs.size();j++) //start comparing the first word with the remaining words
            {
                if(strs[0][i] != strs[j][i])  //j=word number,i=character number
                {
                    return ans;
                }
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
