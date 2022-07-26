//Time Complexity=O(log(row*column))
//Space Complexity=O(1)
class Solution 
{
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        if(m==0)
        {
            return false;
        }
        int n=matrix[0].size();
        //Binary search
        
        int left=0;
        int right=m*n-1;
        
        int pivotindex;
        int pivotele;
        
        while(left<=right)
        {
            pivotindex=left+(right-left)/2;
            pivotele=matrix[pivotindex/n][pivotindex%n];
            
            if(target==pivotele)
            {
                return true;
            }
            else if(target>pivotele)
            {
                left=pivotindex+1;
            }
            else
            {
                right=pivotindex-1;
            }
        }
        return false;
    }
};