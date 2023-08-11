//2716. Minimize String Length
class Solution {
public:
    int minimizedStringLength(string s) {
        set<int>st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }

        return st.size();
    }
};