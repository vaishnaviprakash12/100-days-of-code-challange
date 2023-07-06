//2150. Find All Lonely Numbers in the Array
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        }
        vector<int>ans;
        for(auto it:mp){
            if(it.second==1){
                if((mp.find(it.first+1)==mp.end())&&(mp.find(it.first-1)==mp.end())){
                    ans.push_back(it.first);
                }
                else continue;
            }
        }
        return ans;
    }
};