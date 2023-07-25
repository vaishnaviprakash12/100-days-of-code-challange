//1816. Truncate Sentence
class Solution {
public:
    string truncateSentence(string s, int k) {
        int n=s.size();
        int count=0;
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
               count++;
            }
            if(count==k) break;

            ans.push_back(s[i]);
        }
        return ans;
    }
};