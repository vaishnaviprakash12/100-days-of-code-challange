class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct=INT_MIN;
        int maxP;
        for(int i=0;i<=nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
             maxP=((nums[i]-1)*(nums[j]-1)); 
             maxProduct=max(maxP,maxProduct);
            }
           
        }

        return maxProduct;
    }
};