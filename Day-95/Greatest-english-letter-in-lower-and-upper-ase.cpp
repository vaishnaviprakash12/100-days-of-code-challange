//2309. Greatest English Letter in Upper and Lower Case
class Solution {
public:
    string greatestLetter(string s) {
       unordered_set<int>st;
      string ans="";
      sort(s.begin(),s.end());
       for(auto x:s){
           st.insert(x);
       }
       for(int i=0;i<s.size();i++){
           if(st.find(toupper(s[i]))!=st.end()&&st.find(tolower(s[i]))!=st.end()){
              ans=toupper(s[i]);
           }
       }
       return ans;
    }
};