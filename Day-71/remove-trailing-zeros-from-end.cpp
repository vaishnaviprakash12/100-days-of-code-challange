//2710. Remove Trailing Zeros From a String
class Solution {
public:
    string removeTrailingZeros(string num) {
       int i=num.length()-1;
       while(num[i]=='0'){
           num.pop_back();
           i--;
       }
       return num;
    }
};