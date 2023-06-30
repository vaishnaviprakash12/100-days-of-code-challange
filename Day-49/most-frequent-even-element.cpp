//2404. Most Frequent Even Element
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int maxValue=-1;
        int minKey=-1;
        for(auto it:mp){
            if(it.first%2==0&&it.second>maxValue){
               maxValue=it.second;
               minKey=it.first;
                
            }
        }
        return minKey;
    }
};