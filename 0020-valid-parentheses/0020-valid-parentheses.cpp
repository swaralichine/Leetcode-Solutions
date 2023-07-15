//time complexity=O(n)
//space complexity=O(n) using stack
class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> st;
        for(char ch:s)
        {
            if(ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            else
            {
                if(st.empty())
                {
                    return false;
                }
                if(ch == ')' && st.top() != '(')
                {
                    return false;
                }
                if(ch == '}' && st.top() != '{')
                {
                    return false;
                }
                if(ch == ']' && st.top() != '[')
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        return st.empty();  //return true only if the stack is balanced
    }
};
