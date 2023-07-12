//2148. Count Elements With Strictly Smaller and Greater Elements
class Solution {
public:
    int countElements(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int mini=*min_element(nums.begin(),nums.end());
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mini&&nums[i]<maxi){
                count++;
            }
        }
        return count;
    }
};