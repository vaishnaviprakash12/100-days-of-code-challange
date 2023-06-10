class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=(nums.size())/2;
        map<int,int>map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
            if(map[nums[i]]>n){
                return nums[i];
            }
        }
       return -1;
    }
};