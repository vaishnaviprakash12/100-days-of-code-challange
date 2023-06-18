//2419. Longest Subarray With Maximum Bitwise AND
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = *max_element(nums.begin(), nums.end());
        int ans, cnt = 0;
        for (auto &x : nums) {
            if (x == mx) cnt += 1;
            else cnt = 0;
            ans = max(ans, cnt);
        }
        return ans;
    }
};