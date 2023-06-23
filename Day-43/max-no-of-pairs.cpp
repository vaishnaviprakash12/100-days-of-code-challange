//2341. Maximum Number of Pairs in Array
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        map<int,int>mp;
        for(int i:nums)mp[i]++;
        int pair=0;
        int notPair=0;
        for(auto it:mp){
            pair+=(it.second/2);
            notPair+=(it.second%2);
        }
        return {pair,notPair};
    }
};