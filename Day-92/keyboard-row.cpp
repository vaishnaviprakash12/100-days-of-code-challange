//500.keyboard Row
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string s1="qwertyuiop",s2="asdfghjkl",s3="zxcvbnm";
        unordered_map<char,int>m1,m2,m3;
        for(auto x:s1) m1[x]++;
        for(auto x:s2) m2[x]++;
        for(auto x:s3) m3[x]++;
        vector<string>final;
        for(auto x:words){
            string s=x;
            transform(s.begin(),s.end(),s.begin(),::tolower);
            int c1=1,c2=1,c3=1;
            for(int i=0;i<s.length();i++){
               if(m1.find(s[i])==m1.end()){
                  c1=0;
                  break;
               }
            }
             for(int i=0;i<s.length();i++){
               if(m2.find(s[i])==m2.end()){
                  c2=0;
                  break;
               }
            }
             for(int i=0;i<s.length();i++){
               if(m3.find(s[i])==m3.end()){
                  c3=0;
                  break;
               }
             
            }
  if(c1==1||c2==1||c3==1) final.push_back(x);
        }
        return final;
    }
};