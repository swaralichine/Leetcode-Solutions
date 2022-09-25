class Solution 
{
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
       set<string> ans;
       string morse[] ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
                         ".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
       for(int i=0;i<words.size();i++)
       {
           string st="";
           for(auto a:words[i])
           {
               st = st + morse[a-'a'];
           }
           ans.insert(st);
       }
        return ans.size();
    }
};
