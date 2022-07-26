class SparseVector 
{
public:
    unordered_map<int,int> data;
    SparseVector(vector<int> &nums) 
    {
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                data[i]=nums[i];
            }
        }
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) 
    {
        int dotprod=0;
        for(auto it=data.begin();it!=data.end();it++)
        {
            dotprod = dotprod+vec.data[it->first]*it->second;
        }
        return dotprod;
    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);

