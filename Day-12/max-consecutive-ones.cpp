class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int countZeros=0;
        int ans=INT_MIN;
        while(j<nums.size()){
            if(nums[j]==0){
                countZeros++;
            }
            while(countZeros>k){
               if(nums[i]==0){
                   countZeros--;
               }
               i++;
            }

            ans=max(ans,j-i+1);
            j++;

        }
        return ans;
    }
};