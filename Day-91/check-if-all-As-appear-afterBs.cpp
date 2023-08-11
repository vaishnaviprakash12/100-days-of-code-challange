//2124. Check if All A's Appears Before All B's
class Solution {
public:
    bool checkString(string s) {
      bool flag=true;

      for(int i=1;i<s.size();i++){
          if(s[i]=='a'&&s[i-1]=='b'){
              flag=false;
          }
          else {
              continue;
          }
      }

      return flag;   
    }
};