//count no of pairs with absolute difference k
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();

        unordered_map<int,int>map1;
        for(auto x:nums){
            map1[x]++;
        }

        int count=0;
        for(auto it:map1){
            if(map1.find(it.first+k)!=map1.end()){
                count+=it.second*map1[it.first+k];
            }
        }
        return count;
    }
};