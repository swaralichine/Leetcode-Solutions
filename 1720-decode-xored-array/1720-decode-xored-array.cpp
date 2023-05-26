//If encoded[i]=arr[i] XOR arr[i+1]
//than arr[i+1]=encoded[i] XOR arr[i]
//XOR function is denoted by ^ in C++

//time complexity=O(n)
//space complexity=O(n)

class Solution 
{
public:
    vector<int> decode(vector<int>& encoded, int first)
    {
        int n = encoded.size();
        vector<int> arr(encoded.size()+1);
        
        arr[0]=first;
        
        for(int i=0;i<n;i++)
        {
            arr[i+1] = encoded[i] ^ arr[i];
        }
        return arr;
    }
};