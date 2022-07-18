//Time Complexity = O(1)
//Space Complexity = O(1)

class Solution 
{
public:
string reverseWords(string s)
{
  int i = 0;
for (int j = 0; j < s.size(); ++j)
{
 //checking for space
  if (s[j] == ' ') 
  {
   //reversing the word before the space
    reverse(s.begin() + i, s.begin() + j);
   //setting i to the first character after space
    i = j + 1;
   }
}
   //reversing last word after space
     reverse(s.begin() + i, s.end());
     return s;
}
};