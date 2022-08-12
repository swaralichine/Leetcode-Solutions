class Solution 
{
public:
    int getMaxLen(vector<int>& nums) 
    {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;)
        {
            int start=i;
            while(start<n && nums[start]==0)
            {
                start++;
            }
            int end=start;
            int negative=0;
            int start_negative=-1;
            int end_negative=-1;
            while(end<n && nums[end]!=0)
            {
                if(nums[end]<0)
                {
                    negative++;
                    if(start_negative==-1)
                    {
                        start_negative=end;
                    }
                    end_negative=end;
                }
                end++;
            }
            if(negative%2==0)
            {
                ans=max(ans,end-start);
            }
            else
            {
                if(start_negative!=-1)
                {
                    ans=max(ans,end-start_negative-1);
                }
                if(end_negative!=-1)
                {
                    ans=max(ans,end_negative-start);
                }
            }
            i=end+1;
        }
        return ans;
    }
};