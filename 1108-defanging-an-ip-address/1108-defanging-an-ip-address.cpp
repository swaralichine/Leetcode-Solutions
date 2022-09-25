class Solution 
{
public:
    string defangIPaddr(string address) 
    {
        //declaring string to store the answer
        string str = "";
        for(int i=0;i<address.size();i++)
        {
            if(address[i] == '.')
            {
                str.push_back('[');
                str.push_back('.');
                str.push_back(']');
            }
            else
            {
                str.push_back(address[i]);
            }
        }
        return str;
    }
};