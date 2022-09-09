//Sorting and Array Approach!!
//Comparator Used for sorting!!

//Complexity Analysis;-
//Time Complexity:- O(nlogn)
//Space Complexity:- O(1)

class Solution {
public:

// Comparator Fun for sorting according to the first and second value 
static bool cmp(vector<int> &x, vector<int> &y) {

    if(x[0]==y[0]){
        return x[1]>y[1];
    }
    else{
        return x[0]<y[0];
    }
}
int numberOfWeakCharacters(vector<vector<int>>& properties) {
    int count=0;
    
    int n=properties.size();
    
    sort(properties.begin(),properties.end(),cmp);
    
    int maxi=properties[n-1][1];
    
	// Actual Implementation
	// Run for loop from the end so that we can easily check whether current defence value is greater than the previous maximum one or not.
	
    for(int j=n-2;j>=0;j--){
        if(properties[j][1] < maxi){
            count++;
             
        }
       maxi=max(maxi,properties[j][1]);
    }
    
	//returning the number of weak characters
    return count;
   
}
};