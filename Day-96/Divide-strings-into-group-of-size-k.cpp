//2138. Divide a String Into Groups of Size k
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        int n = s.size();
        vector<string> ans;
        string temp = "";
        for(int i=0; i<n; i++){
            temp.push_back(s[i]);
            if(temp.size() == k){
                ans.push_back(temp);
                temp = "";
            }
        }
        if(temp.size() == 0) return ans;
        while(temp.size() != k){
            temp.push_back(fill);
        }
        ans.push_back(temp);
        return ans;
    }
};