//frequency counter
//time complexity = O(n)
//space complexity = O(1)
class Solution 
{
public:
    bool isAnagram(string s, string t) 
    {
        //base case :- check lengths
        if(s.length() != t.length())
        {
            return false;
        }
        //create vector to store the count
        vector<int> v(26,0);
        
        for(auto i:s)
        {
            v[i - 'a']++;
        }
        for(auto i:t)
        {
            v[i - 'a']--;
        }
        
        for(auto i:v)
        {
            if(i != 0)  //some element is extra in t
            {
                return false;
            }
        }
        return true;
    }
};