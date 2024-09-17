class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>s;
        vector<string>v;
        string word;
        string temp=s1+' '+s2;
        for(int i=0; i<temp.size(); i++){
            if(temp[i]==' '){
                if(!word.empty()){
                    s[word]++;
                    word.clear();
                }
            }
             else{
                    word+=temp[i];
                }
        }
        if(!word.empty()){
                s[word]++;
            }
            
        for(auto it:s){
            if(it.second==1){
                v.push_back(it.first);
            }
        }
        return v;
    }
};