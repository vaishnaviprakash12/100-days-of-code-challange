//2275. Largest Combination With Bitwise AND Greater Than Zero
class Solution {
public:
    int largestCombination(vector<int>& nums) {
        int n = nums.size();
        int maxSet = 0;
        for(int i=0;i<30;i++){
            int cnt=0;
            for(int x:nums){
                if((x>>i&1)==1)cnt++;

            }
            maxSet=max(maxSet,cnt);
        }
        return maxSet;

    }
};