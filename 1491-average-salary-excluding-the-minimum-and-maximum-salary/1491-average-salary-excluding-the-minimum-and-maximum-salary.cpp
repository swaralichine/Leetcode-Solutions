//time complexity = O(nlogn)
class Solution 
{
public:
    double average(vector<int>& salary) 
    {
        double avg;
        double sum=0;
        int count=0;
        
        sort(salary.begin(),salary.end());
        
        for(int i=1;i<salary.size()-1;i++)  //excluding the min and max salary
        {
            sum=sum+salary[i];   
            count++;    //to find the average
        }
        return avg=(sum/count);
    }
};