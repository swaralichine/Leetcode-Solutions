//1. Create two different arrays for each digit and letter.
//2. check for first blank space and seprate the identifiers and (letters and digits) in two different strings. (say s, t).
//3. If the string is letter push it into letter array in reverse order.(to sort the letters not indentifier)
//4. Same goes with digit array.
//5. Now sort the letters array.
//6. And push the final answer into final vector.
//Let NN be the number of logs in the list and MM be the maximum length of a single log.
//Time Complexity:O(M⋅N⋅logN)
//space complexity:O(mn)
class Solution 
{
private:
    vector<string>ans;
    
    vector<pair<string,string>>letters;
    vector<pair<string,string>>digits;
    
    bool f;  //for identifier
public:
    vector<string> reorderLogFiles(vector<string>& logs)
    {
        for(auto it : logs)
        {
            string s="", t="";
            
            f = false;//1st space encountered or not
            
            for(int j=0; j<(int)it.size(); ++j)
            {
                if(it[j]==' ' and !f)
                {
                    f=true;
                    continue;//1st space encountered(first = identifier)
                }
                if(!f)   //identifier is identified
                    s+=(char)it[j];//first part eg  dig1 (storing identifier in s)
                else  
                    t+=(char)it[j];//2nd part eg 8 1 5 1
            }
            if(t[0]>='a' and t[0]<='z')
                letters.push_back({t,s});
            else 
                digits.push_back({t,s});
        }
        
        sort(letters.begin(),letters.end());
        
        for(auto it : letters)
            ans.push_back((string)it.second+" "+it.first);  //second part is the identifier
        for(auto it : digits)
            ans.push_back((string)it.second+" "+it.first);
        
        return ans;
    }
};