//557. Reverse Words in a String III
class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string temp="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else {
                res=' '+temp+res;
                temp="";
            }
        }
        res=temp+res;
        return res;
    }
};