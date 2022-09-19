class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        map<string,vector<string>> maap;
        
        for(int i = 0; i < paths.size(); i++){
            string t,dir;
            bool flag = true;
            
            // istringstream breaks down a string into words around spaces
            istringstream ss(paths[i]);
            
            while(ss>>t){
                if(flag){
                    // *dir stores first part of the string which is directory
                    dir = t;
                    flag = false;
                }
                else{
                    string k = "";
                    for(int j = t.size()-2; j > 0; j--){
                        if(t[j] == '('){
                            /* use fn_content as key to store values in map
                            For ex: root/a 1.txt(abcd) 2.txt(efgh)
                            string t = { root/a, 1.txt(abcd), 2.txt(efgh)}
                            string dir = "root/a"
                            string k = {abcd,efgh}
                            maap[abcd].push_back(root/a + "/" + 1.txt);
                            maap[efgh].push_back(root/a + "/" + 2.txt);
                            */
                            maap[k].push_back(dir+"/"+t.substr(0,j));
                            break;
                        }
                        k += t[j];
                    }
                }
            }
        }
        
        vector<vector<string>> ans;
        for(auto it:maap){
            // if size > 1,that's when duplicate exists
            if(it.second.size()>1)
                ans.push_back(it.second);
        }
        
        return ans;
        
    }
};