//2220. Minimum Bit Flips to Convert Number
class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
    }
};