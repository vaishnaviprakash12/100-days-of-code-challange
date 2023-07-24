//709.To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }

        return s;
    }
};