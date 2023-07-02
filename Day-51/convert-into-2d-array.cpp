//2610. Convert an Array Into a 2D Array With Conditions
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int n=0;
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
            n=max(n,mp[x]);
        }
       vector<vector<int>>ans(n);
       vector<set<int>>s(n);
       for(auto x:nums){
           for(int i=0;i<n;i++){
               if(s[i].find(x)==s[i].end()){
                   ans[i].push_back(x);
                   s[i].insert(x);
                   break;
               }
           }
       }
       return ans;
    }
};