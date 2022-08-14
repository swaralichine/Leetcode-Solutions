//Time Complexity=O(n)
//Space Complexity=O(n)
//Space complexity can be improved by not using stack
class Solution
{
    public:
        int calculate(string s)
        {
            int n = s.length();
            stack<int> st;
            char sign = '+';
            
            for (int i = 0; i < n; ++i)
            {
                if (s[i] == ' ') 
                    continue;

                if (isdigit(s[i]))
                {
                    int val = 0;
                    while (i < n && isdigit(s[i]))
                    {
                        val = 10*val + (s[i] - '0');
                        i++;
                    }
                    i--;	// moves one pointer extra so decreament
                    if (sign == '+')
                    {
                    	// runs based on the prev sign
                        st.push(val);
                    }
                    else if (sign == '-')
                    {
                        st.push(-val);
                    }
                    else if (sign == '*')
                    {
                        int top = st.top();
                        st.pop();
                        st.push(val *top);
                    }
                    else if (sign == '/')
                    {
                        int top = st.top();
                        st.pop();
                        st.push(top / val);
                    }
                }
                else if (s[i] != ' ')
                {
                    sign = s[i];
                }
            }
            
            int ans = 0;
            while (!st.empty())
            {
                int e = st.top();
                ans += e;
                st.pop();
            }
            return ans;
        }
};