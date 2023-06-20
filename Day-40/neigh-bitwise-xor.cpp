//2683. Neighboring Bitwise XOR
class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int m=0;
        for(auto x:d){
            m^=x;
        }if(m==0) return 1;
       else  return 0;
    }
};