//number with even no of digits
class Solution {
public:
    int findNumbers(vector<int>& nums) {
      int count=0;
      for(int num:nums){
          int numDigits=floor(log10(num))+1;
          if(numDigits%2==0) count++;
      }   
      return count;
    }
};