//747. Largest Number At Least Twice of Others
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int ans=0; int max=0;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]) max=nums[i] , ans=i;
        }
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]*2&&ans!=i) return -1;
        }
        return ans;
    }
};