//2283. Check if Number Has Equal Digit Count and Digit Value
class Solution {
public:
    bool digitCount(string num) {
        unordered_map<int,int>mp;
        for(auto i:num){
            mp[i-'0']++;
        }
        for(int i=0;i<num.size();i++){
           int n=num[i]-'0';
           if(mp[i]!=n) return false;
        }
        return true;
    }
};