//1374. Generate a String With Characters That Have Odd Counts
class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2!=0){
            for(int i=0;i<n;i++){
                ans+='a';
            }
        }
        else {
            for(int i=0;i<n-1;i++) {
                ans+='a';
            }
            ans+='b';
        }
        return ans;
    }
};