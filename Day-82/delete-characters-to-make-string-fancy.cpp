//1957. Delete Characters to Make Fancy String
class Solution {
public:
    string makeFancyString(string s) {
        string res="";
        int cnt=1;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){
                cnt++;
            }
            else{
                cnt=1;
            }

            if(cnt>=3) continue;
            res+=s[i];
        }
        return res;
    }
};
