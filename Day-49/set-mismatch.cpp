//645. Set Mismatch
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<long,long>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<int>ans;

        for(auto it:mp){
            if(it.second==2){
                ans.push_back(it.first);
                break;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};