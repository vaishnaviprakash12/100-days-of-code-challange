class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        //calculating diff of first window
        int res=nums[k-1]-nums[0];

        for(int i=k;i<n;i++){
           res=min(res,nums[i]-nums[i-k+1]);
        }
        return res;
    }
};