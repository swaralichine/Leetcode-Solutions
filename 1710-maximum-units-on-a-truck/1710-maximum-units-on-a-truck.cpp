//Time Complexity=O(nlogn)
//Space Complexity=O(1)

class Solution 
{
public:
    static bool comparebox(vector<int>& v1,vector<int>& v2)
    {
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {

        sort(boxTypes.begin(),boxTypes.end(),comparebox);

        int ans=0;
        
        for(auto box : boxTypes)
        {
            int x = min(box[0],truckSize); 
            ans+=(x*box[1]); 
            truckSize-=x;  

            if(truckSize==0) break;  
        }
        return ans;
   }
};

