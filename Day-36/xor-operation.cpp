//1486. XOR Operation in an Array
class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=0;
        int i=0;
        for(int j=0;j<n;j++){
            ans=ans^(start+(2*i));
            i++;
        }
        return ans;
    }
};