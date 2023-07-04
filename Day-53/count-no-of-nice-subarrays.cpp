//1248. Count Number of Nice Subarrays
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int i=0,sum=0,count=0;
        unordered_map<int,int>mp;
        while(i<nums.size()){
            if(nums[i]%2!=0) sum+=1;
            if(sum==k) count++;
            if(mp.find(sum-k)!=mp.end()) count+=mp[sum-k];
            mp[sum]++;
            i++;
        }
        return count;
    }
};