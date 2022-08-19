//time complexity=O(n)
//space complexity=O(n) //in worst case when all are nine, sc=n+1
class Solution 
{
public:
    vector<int> plusOne(vector<int>& digits) 
    {
        int n=digits.size();
        
        // move along the input array starting from the end
        for(int i=n-1;i>=0;i--)
        {
           // set all the nines at the end of array to zeros
             if(digits[i]==9)
             {
                 digits[i]=0;
             }
            // here we have the rightmost not-nine 
            else
            {
                digits[i]++;
                 // and the job is done
                //since we are supposed to increase last digits one only
                return digits;
            }
        }
        // we're here because all the digits are nines(corner case)
        digits.insert(digits.begin(),1);
        return digits;
    }
};