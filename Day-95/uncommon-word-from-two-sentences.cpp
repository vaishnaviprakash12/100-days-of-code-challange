//
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string, int> st;
      for(int i=0;i<s1.length();i++){
        string word;
        while(i<s1.length()&&s1[i]!=' '){
          word+=s1[i];
          i++;
        }
        st[word]++;
      }
      for(int i=0;i<s2.length();i++){
        string word;
        while(i<s2.length()&&s2[i]!=' '){
          word+=s2[i];
          i++;
        } 
        st[word]++;
      }
     vector<string>ans;
     for(auto it:st){
       if(it.second==1) ans.push_back(it.first);
     }
     return ans;
    }
};
