class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]]=i;

        for(auto j:operations){
            nums[mp[j[0]]]=j[1];
            mp[j[1]]=mp[j[0]];
        }
     return nums;
    }
};