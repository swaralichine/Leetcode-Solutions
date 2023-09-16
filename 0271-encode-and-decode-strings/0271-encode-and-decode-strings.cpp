
class Codec 
{
public:
    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) 
    {
        string s;
        for (string& str : strs) 
        {
            s.push_back(str.size() - 100);
            s = s + str;
        }
        return s;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s)
    {
        int n = s.size();
        vector<string> strs;
        int i = 0;
        while (i < n) 
        {
            int strN = s[i++] + 100;
            string str = s.substr(i, strN);
            strs.push_back(str);
            i += strN;
        }
        return strs;
    }
};
// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));
