class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int ones=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            ones+=(nums[i]==1);
        }
       nums.insert(nums.end(),nums.begin(),nums.end());
       int ans=n;
       int i=0;
       int j=0;
       int one=0;
       while(j<2*n){
           one+=(nums[j]==1);
           if(j-i+1==ones){
               ans=min(ans,ones-one);
               one-=(nums[i]==1);
               i++;
           }
           j++;
       }
     return ans==n?0:ans;
    }
};