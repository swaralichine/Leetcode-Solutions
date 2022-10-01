//Time Complexity=O(1)
//Space Complexity=O(n)

class Solution
{
public:
int getSum(int a, int b) 
 {
    vector<int> v;
    //putting both a and b in a dynamic array
    v.push_back(a);
    v.push_back(b);
    
    //calculating the sum of numbers between beginning and end position , with inital value of sum taken as "zero"
    int ans = accumulate(v.begin(),v.end(),0);
    return ans;
 }
};