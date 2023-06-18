//2317. Maximum XOR After Operations
class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans=0;
        for(auto it:nums){
            ans|=it;
        }

        return ans;
    }
};