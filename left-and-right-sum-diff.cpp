//2574. Left and Right Sum Differences
class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
       int right=0,left=0;
       vector<int>ans;

       for(auto i:nums){
           right+=i;
       } 
       for(int i=0;i<nums.size();i++){
           right-=nums[i];
           ans.push_back(abs(left-right));

           left+=nums[i];
       }
       return ans;
    }
};
