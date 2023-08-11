//2788. Split Strings by Separator
class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char s) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            string st=words[i];
            string temp="";
            for(auto a:st){
                if(a==s&& temp!=""){
                    ans.push_back(temp);
                    temp="";
                }
                if(a!=s){
                   temp+=a;
                }
            }
            if(temp!="") ans.push_back(temp);
        }
        return ans;
    }
};