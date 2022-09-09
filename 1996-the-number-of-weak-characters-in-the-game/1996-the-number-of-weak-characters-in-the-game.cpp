class Solution {
public:
    int ct[100002];
    int numberOfWeakCharacters(vector<vector<int>>& a) {
        int ans=0,ma=0;
        for(int i=0;i<a.size();++i){
            ct[a[i][0]]=max(a[i][1],ct[a[i][0]]);
            ma=max(ma,a[i][0]);
        }
        for(int i=ma-1;i>0;--i)
            ct[i]=max(ct[i],ct[i+1]);
        for(int i=0;i<a.size();++i)
            if(ct[a[i][0]+1]>a[i][1])++ans;
        return ans;
    }
};
