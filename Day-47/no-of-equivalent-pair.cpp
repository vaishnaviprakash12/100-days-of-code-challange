class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>,int>mp;
        for(auto it:dominoes){
            sort(it.begin(),it.end());
            mp[make_pair(it[0],it[1])]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second>1){
                count+=((it.second)*(it.second-1))/2;
            }
        }
        return count;
    }
};