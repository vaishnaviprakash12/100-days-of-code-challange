//2729. Check if The Number is Fascinating
class Solution {
public:
    bool isFascinating(int n) {
        string num1=to_string(2*n);
        string num2=to_string(3*n);
        string s=to_string(n);
        string ans=s+num1+num2;
        unordered_map<char,int>mp;

        for(auto it:ans){
            mp[it]++;
        }

        for(auto it:mp){
            if(it.first=='0'||it.second>1) return false;
        }
        return true;
    }
};