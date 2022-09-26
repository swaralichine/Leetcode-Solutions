class Solution {
public:
    vector<char>parent;
    char find(char c)
    {
        if(c==parent[c])
            return c;
        return parent[c]=find(parent[c]);
    }
    bool equationsPossible(vector<string>& equations) 
    {
        parent.resize(26,0);
        for(int i=0;i<26;i++)
            parent[i]=i;
        for(int i=0;i<equations.size();i++)
        {
            if(equations[i][1]=='=')
            {
                int x=find(equations[i][0]-'a');
                int y=find(equations[i][3]-'a');
                if(x!=y)
                    parent[y]=x;
            }
        }
        for(int i=0;i<equations.size();i++)
        {
            if(equations[i][1]=='!')
            {
                int x=find(equations[i][0]-'a');
                int y=find(equations[i][3]-'a'); 
                if(x==y)
                    return false;
            }
        }
        return true;
    }
};