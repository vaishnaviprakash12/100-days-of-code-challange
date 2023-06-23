//2670. Find the Distinct Difference Array
class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        map<int,int>m1,m2;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            m2[nums[i]]++;
            m1[nums[i]]--;
            if(m1[nums[i]]==0){
                m1.erase(nums[i]);
            }
            ans.push_back(m2.size()-m1.size());
        }
        return ans;
    }
};