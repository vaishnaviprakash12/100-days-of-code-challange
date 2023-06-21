//287. Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                count=nums[i];
                break;
            }
        }
        return count;
    }
};