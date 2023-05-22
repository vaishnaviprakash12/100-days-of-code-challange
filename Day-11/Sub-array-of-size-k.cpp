class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int n=nums.size();
        int product=1;
        int i=0;
        int count=0;

      for(int j=0;j<nums.size();j++){
          product*=nums[j];
          while(product>=k){
              product=product/nums[i];
              i++;
          }

          count+=1+(j-i);

      }
      return count;

    }
};