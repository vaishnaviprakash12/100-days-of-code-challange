//1941. Check if All Characters Have Equal Number of Occurrences
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        int occur;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        occur=mp[s[0]];
        for(auto it:mp){
            if(occur!=it.second) return false;
        }

        return true;
    }
};