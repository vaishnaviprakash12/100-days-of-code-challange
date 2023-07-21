//1332. Remove Palindromic Subsequences
class Solution {
public:
    int removePalindromeSub(string s) {
        string s1=s;
        reverse(s.begin(),s.end());
        if(s==s1){
            return 1;
        }
        return 2;
    }
};