class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct=INT_MIN;
        int prod=1;
        for(int i=0;i<nums.size();i++){
            prod*=nums[i];
            maxProduct=max(prod,maxProduct);
            if(prod==0){
                prod=1;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod*=nums[i];
            maxProduct=max(prod,maxProduct);
            if(prod==0) prod=1;
        }
        return maxProduct;
    }
};