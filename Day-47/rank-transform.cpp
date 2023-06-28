//1331. Rank Transform of an Array

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int>st;
        unordered_map<int,int>mp;
        vector<int>rank;
        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }
        int j=1;
        for(auto i:st){
            mp[i]=j;
            j++;
        }*

        for(int i=0;i<arr.size();i++){
            rank.push_back(mp[arr[i]]);
        }
        return rank;

    }
};