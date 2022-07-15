class Solution 
{
public:
    double average(vector<int>& salary) 
    {
        double avg;
        double sum=0;
        int count=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<salary.size()-1;i++)
        {
         sum=sum+salary[i];   
            count++;
        }
        return avg=sum/count;
    }
};