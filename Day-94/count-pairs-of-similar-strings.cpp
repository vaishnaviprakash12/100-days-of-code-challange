//2506. Count Pairs Of Similar Strings
class Solution {
public:
    int similarPairs(vector<string>& words) {
        int n=words.size();
        int ans=0;
        for(int i=0;i<n;i++){
            unordered_set<char>s1,s2;
            for(auto &it:words[i]) s1.insert(it);
            for(int j=i+1;j<n;j++){
                for(auto &it:words[j]) s2.insert(it);
                if(s1==s2) ans++;
                s2.clear();
            }
        }
        return ans;
    }
};