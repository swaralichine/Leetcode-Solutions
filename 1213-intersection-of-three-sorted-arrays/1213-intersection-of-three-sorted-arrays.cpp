//Time Complexity=O(n)
//Space Complexity=O(1)
class Solution 
{
public:
    vector<int> arraysIntersection(vector<int>& arr1, vector<int>& arr2, vector<int>& arr3)
    {
        vector<int> ans;
        //declaring three pointers for three vectors
        int p1=0;
        int p2=0;
        int p3=0;
        
        while(p1 < arr1.size() && p2 < arr2.size() && p3 < arr3.size())
        {
            if(arr1[p1] == arr2[p2] && arr2[p2] == arr3[p3])
            {
                ans.push_back(arr1[p1]);
                p1++;
                p2++;
                p3++;
            }
            else
            {
                if(arr1[p1] < arr2[p2])
                {
                    p1++;
                }
                else if(arr2[p2] < arr3[p3])
                {
                    p2++;
                }
                else
                {
                    p3++;
                }
            }
        }
        return ans;
    }
};