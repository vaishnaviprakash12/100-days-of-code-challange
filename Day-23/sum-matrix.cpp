class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=nums[0].size();
        int maxVal;
        int sum=0;
        int i,j;
        for(auto &i:nums){
            sort(i.begin(),i.end());
        }
        for(i=0;i<m;i++){
            maxVal=0;
            for(j=0;j<n;j++){
              maxVal=max(nums[j][i],maxVal);
            }
            sum+=maxVal;
        }

        return sum;
    }
};