//2733. Neither Minimum nor Maximum
class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<=2) return -1;
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};