//1935. Maximum Number of Words You Can Type
class Solution {
public:
    int canBeTypedWords(string t, string b) {
       unordered_set<char>st;
       for(auto x:b){
           st.insert(x);
       }
       int i=0;
       int cnt=0;

       while(i<t.size()){
           bool flag=true;
           while(i<t.size()&&t[i]!=' '){
               if(st.count(t[i])){
                   flag=false;
               }
               i++;
           }

           if(flag){
               cnt++;
           }
           i++;
       }
       return cnt;
    }
};
