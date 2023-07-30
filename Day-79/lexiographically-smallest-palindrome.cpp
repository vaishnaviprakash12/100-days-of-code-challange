//2697. Lexicographically Smallest Palindrome
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int count=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1]){
              if(s[i]<s[n-i-1]){
                  s[n-i-1]=s[i];
              }
              else{
                  s[i]=s[n-i-1];
              }
            }
            else continue;
        }
       return s;
    }
};
