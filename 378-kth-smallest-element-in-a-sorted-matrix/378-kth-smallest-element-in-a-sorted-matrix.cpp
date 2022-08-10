//using priority queue
class Solution
{
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) 
    {
        int n=matrix.size();
    int m = matrix[0].size();
    
    priority_queue<int>q;
    
    for(int i=0 ;i<n;i++){
        for(int j=0 ;j<m;j++){
           if(q.size()<k)q.push(matrix[i][j]);
           else{
               if(matrix[i][j]<q.top()){
                   q.pop();
                   q.push(matrix[i][j]);
               }
           }
        }
    }
    
    return q.top();
    }
};
