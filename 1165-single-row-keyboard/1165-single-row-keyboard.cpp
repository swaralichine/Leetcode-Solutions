//time complexity=O(n)
//space complexity=O(1)
//The keyboard only has unique lowercase English letters, so we can map it to an array of size 26. Therefore, we'll create an array of size 26, let's call it keyIndices.
//Store the index of each letter in this array by traversing keyboard.
//Initialize the result variable to 0 which would store the summation of all the distances.
//Declare a variable prev which would store the index of the previous key. Since the starting position is 0, initialize it to 0.
//Traverse word letter-by-letter.
//For each letter c add |prev-indexof(c)∣ to result.
//Update prev to index of c.
//repeat the steps for all letters
//At the end of the traversal, result will be the final time required to type the word.
class Solution 
{
public:
    int calculateTime(string keyboard, string word) 
    {
        vector<int>keyIndices(26,-1);
        
        //store the index of each key
        for(int i=0;i<keyboard.length();i++)
        {
            keyIndices[keyboard[i]-'a']=i;
        }
        // Initialize previous index as starting index = 0.
        int prev=0;
        int result=0;
        
        //calculate the total time
        for(char &c:word)
        {
            // Add the distance from previous index
            // to current letter's index to the result.
            result = result+abs(prev-keyIndices[c-'a']);
            // Update the previous index to current index for next iteration.
            prev=keyIndices[c-'a'];
        }
        return result;
    }
};