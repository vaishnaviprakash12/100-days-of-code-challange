//594. Longest Harmonious Subsequence
class Solution {
public:
    int findLHS(vector<int>& nums) {
    sort(nums.begin(),nums.end());
      int i=0;
      int j=0;
      int ans=0;
      int maxAns=0;
      while(i<nums.size()){
          if(nums[i]-nums[j]==1){
              ans=i-j+1;
              maxAns=max(maxAns,ans);
          }
          else if(nums[i]-nums[j]>1){
              while(nums[i]-nums[j]>1){
                  j++;
              }
             } 
        i++;
      }
     return maxAns;
    }
};
