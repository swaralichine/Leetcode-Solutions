class Solution 
{
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<int> ans;
        for(int i=0;i<mat.size();i++)
        {
            int count_soldiers=0;
            for(int j=0;j<mat[0].size();j++)
            {
                if(mat[i][j]==1)
                {
                    count_soldiers++;
                }
            }
            ans.push_back(count_soldiers);
        }
        priority_queue<pair<int,int>> pq; //count and row number
        
        for(int i=0;i<ans.size();i++)
        {
            pq.push(make_pair(ans[i],i));
        }
        ans.clear();             
        for(int i=0;i<mat.size();i++)
        {
            ans.push_back(pq.top().second);   //only storing the row number
            pq.pop();
        }
        reverse(ans.begin(),ans.end());   //weakest to strongest
        //k weakest row numbers
        vector<int> row_number;
        for(int i=0;i<k;i++)
        {
           row_number.push_back(ans[i]);                
        }
        return row_number;            
    }
};