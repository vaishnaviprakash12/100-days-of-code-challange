class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int increase=0,decrease=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>=nums[i+1]){
                increase++;
            }
            if(nums[i]<=nums[i+1]){
                decrease++;
            }
        } 
       if(increase==n-1||decrease==n-1){
           return true;
       }
       return false;
    }
};
