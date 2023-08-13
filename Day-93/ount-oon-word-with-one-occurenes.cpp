//2085. Count Common Words With One Occurrence
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
       unordered_map<string ,int>mp1,mp2;
       int ans=0;
       for(auto x:words1) mp1[x]++;
       for(auto y:words2) mp2[y]++;
        
       if(mp1.size()>=mp2.size()){
           for(auto i:mp1){
             ans+=(i.second==1&&mp2[i.first]==1)?1:0;
           }
       }else{
           for(auto i:mp2){
               ans+=(i.second==1&&mp1[i.first]==1)?1:0;
           }
       }
       return ans;
    }
};