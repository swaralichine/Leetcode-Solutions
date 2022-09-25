//two pointer technique(left,right)
class Solution 
{
public:
    int maxDistance(vector<int>& colors) 
    {
        int n = colors.size();
        int ans_right=0;
        int i=0;
        int j=n-1;
        
        while(i<j)
        {
            if(colors[i]!=colors[j])
            {
                ans_right=max(ans_right,abs(i-j));
                break;
            }
            j--;  //moving the right pointer towards the left
        }
        
        int ans_left=0;
        i=0;
        j=n-1;
        
        while(i<j)
        {
            if(colors[i]!=colors[j])
            {
                ans_left=max(ans_left,abs(i-j));
                break;
            }
            i++;  //moving the left pointer towards the right
        }
        return max(ans_left,ans_right);
    }
};

