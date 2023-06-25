//2395. Find Subarrays With Equal Sum
class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
       int n=nums.size();
       if(n<=2) return false;
        unordered_set<long long>st;
        for(int i=0;i<n-1;i++){
            long long  sum=nums[i]+nums[i+1];
            if(st.count(sum)) return true;
            st.insert(sum);
        }
        return false;
    }
};