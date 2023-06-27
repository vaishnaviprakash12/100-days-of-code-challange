class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==key&&i<nums.size()-1) mp[nums[i+1]]++;
        }

        int max=INT_MIN;
        int ans=0;
        for(auto it:mp){
            if(it.second>max){
                max=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};