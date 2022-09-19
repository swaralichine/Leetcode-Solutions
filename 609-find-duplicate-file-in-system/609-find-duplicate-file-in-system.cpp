//find duplicates if the content of the file is the same
//time complexity = O(n*l) n=size of the array and l=size of the string parsed
//space complexity = O(n*l)
class Solution 
{
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) 
    {   
        map<string,vector<string>> mp;
        
        for(int i = 0; i < paths.size(); i++)
        {
            string t,dir;
            bool flag = true;
            
            // istringstream breaks down a string into words around spaces
            istringstream ss(paths[i]);
            
            while(ss>>t)
            {
                if(flag)
                {
                    // *dir stores first part of the string which is directory
                    dir = t;
                    flag = false;
                }
                else
                {
                    string k = "";
                    for(int j = t.size()-2; j > 0; j--)
                    {
                        if(t[j] == '(')
                        {
                            /* use fn_content as key to store values in map
                            For ex: root/a 1.txt(abcd) 2.txt(efgh)
                            string t = { root/a, 1.txt(abcd), 2.txt(efgh)}
                            string dir = "root/a"
                            string k = {abcd,efgh}
                            maap[abcd].push_back(root/a + "/" + 1.txt);
                            maap[efgh].push_back(root/a + "/" + 2.txt);
                            */
                            mp[k].push_back(dir+"/"+t.substr(0,j));
                            break;
                        }
                        k = k + t[j];
                    }
                }
            }
        }
        
        vector<vector<string>> ans;
        
        for(auto it:mp)
        {
            // if size > 1,that's when duplicate exists
            if(it.second.size()>1)
            {
              ans.push_back(it.second);   
            }
        }
        return ans;
    }
};