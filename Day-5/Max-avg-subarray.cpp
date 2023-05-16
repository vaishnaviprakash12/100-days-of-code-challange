class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
      int sum=0;
      int i=0;
      int j=0;
      int maxSum=INT_MIN;
       while(j<n){
           sum+=nums[j];
           if(j-i+1<k){
              j++;
           }
           else if(j-i+1==k){
            maxSum=max(maxSum,sum);
            sum=sum-nums[i];
               i++;
              j++;
           }
       }
       return maxSum/(double)k;
    }
};