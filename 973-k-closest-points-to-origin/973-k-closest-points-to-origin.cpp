//time complexity=O(nlogn)
//space complexity=O(n)
class Solution 
{
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k)
    {
        //using priority queue to store the smallest elements first
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>             data;
        
        for(int i=0;i<points.size();i++)
        {
            //finding the points
            int x=points[i][0]-0;
            int y=points[i][1]-0;
            
            //using the formula to calculate the distance
            int distance=pow(x,2)+pow(y,2);
            
            //saving the distance and the coordinates in the priority queue
            data.push({distance,i}); 
        }
        //declaring a vector to display the result
        vector<vector<int>> ans;
        
        while(k)
        {
            //the second element so to say is the coordinate(first is the distance which            is the key)
            int x=data.top().second;
            data.pop();
            ans.push_back(points[x]);
            k--;
        }
        return ans;
    }
};


    