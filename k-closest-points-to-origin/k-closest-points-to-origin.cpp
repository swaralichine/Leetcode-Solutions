//time complexity=O(nlogk) n=length of points
//space complexity=O(k)
class Solution 
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>> pq;
        
        vector<vector<int>> ans;
        for(int i=0;i<points.size();i++)
        {
            int x=points[i][0]-0;
            int y=points[i][1]-0;
            
            int distance=pow(x,2)+pow(y,2);
            
            pq.push({distance,i});
        }
        while(k)
        {
            int x=pq.top().second;
            pq.pop();
            ans.push_back(points[x]);
            k--;
        }
        return ans;
    }
};


    