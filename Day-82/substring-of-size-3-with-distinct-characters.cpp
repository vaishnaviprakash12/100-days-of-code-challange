//1876. Substrings of Size Three with Distinct Characters
class Solution {
public:
    int countGoodSubstrings(string s) {
        int k=3,i=0,j=0,ans=0;
        unordered_map<char,int>m;
        while(j<s.size()){
            m[s[j]]++;
            if(j-i+1>k){
                m[s[i]]--;
                if(m[s[i]]==0){
                m.erase(s[i]); }  i++;
           
            }
            
            if(j-i+1==k){
                if(m.size()==3){
                    ans++;
                }
            }
            j++;
          
        }
     return ans;

    }
};