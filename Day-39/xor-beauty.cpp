//2527. Find Xor-Beauty of Array
class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int Xor=0;
        for(auto i:nums) Xor^=i;
        return Xor;
    }
};