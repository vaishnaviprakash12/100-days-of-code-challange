//78. Subsets
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>TotalSubsets;
        int n=nums.size();
        for(int i=0;i<pow(2,n);i++){
            vector<int>sub;
            for(int j=0;j<=n-1;j++){
                if(i&(1<<j)){
                    sub.push_back(nums[j]);
                }
            }
            TotalSubsets.push_back(sub);
        }
        return TotalSubsets;
    }
};