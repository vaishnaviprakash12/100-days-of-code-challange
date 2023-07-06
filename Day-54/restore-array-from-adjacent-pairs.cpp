//1743. Restore the Array From Adjacent Pairs
class Solution {
public:
 void dfs(map<int,vector<int>>&m,set<int>&vis,int a,vector<int>&ans){
        if(vis.find(a)!=vis.end()){
            return;
        }
        ans.push_back(a);
        vis.insert(a);
        for(auto x:m[a]){
            dfs(m,vis,x,ans);
        }
    }

    vector<int> restoreArray(vector<vector<int>>& A) {
        map<int,vector<int>>m;
        for(auto a:A){
            m[a[0]].push_back(a[1]);
            m[a[1]].push_back(a[0]);
        }
        int head;
        for(auto a:m){
            if(a.second.size()==1){
                head=a.first;
            }
        }
        set<int>vis;
        vector<int>ans;
        dfs(m,vis,head,ans);
        return ans;
    }
};