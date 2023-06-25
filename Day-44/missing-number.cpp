//268. Missing Number


//bit manipulation solution
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x=0;
        for(int l:nums){
            x^=l;
        }
        for(int i=0;i<=nums.size();i++){
            x^=i;
        }
        return x;
    }
};

//array-sum solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<=nums.size();i++){
            sum1+=i;
        }
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
        }
        return sum1-sum2;
    }
};