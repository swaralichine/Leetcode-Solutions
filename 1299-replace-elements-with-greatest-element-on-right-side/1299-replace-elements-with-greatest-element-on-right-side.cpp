class Solution
{
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int n=arr.size();
        if(n==0)
        {
            return arr;
        }
        int great_ele=arr[n-1];  //last element
        arr[n-1]=-1;  //last element has no element to the right
        
        //we start from the second last element
        for(int i=n-2;i>=0;i--)
        {
            int curr=arr[i];
            arr[i]=great_ele;
            great_ele=max(great_ele,curr);
        }
        return arr;
    }
};
