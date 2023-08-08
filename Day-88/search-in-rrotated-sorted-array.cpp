//33. Search in Rotated Sorted Array
class Solution {
public:
    int search(vector<int>& nums, int target) {
        return (find(begin(nums), end(nums), target) == nums.end() ? -1 : find(begin(nums), end(nums), target) - begin(nums));
    }
};