//1704. Determine if String Halves Are Alike
class Solution {
public:
    bool vowelCheck(char ch){
      if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
          return true;
      }
      return false;
    }
    bool halvesAreAlike(string s) {
        int first=0;
        int second=0;
        int n=s.length();
        for(int i=0;i<n/2;i++){
           if(vowelCheck(s[i])){
               first++;
           }
        }
        for(int i=n/2;i<n;i++){
           if(vowelCheck(s[i])){

               second++;
           }
        }
        return first==second;
    }
};
