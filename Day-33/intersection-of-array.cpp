class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s;
        vector<int>v;
        for(auto x:nums1){
            s.insert(x);
        }

        for(auto y:nums2){
            if(s.count(y)){
                v.push_back(y);
                s.erase(y);
            }
        }
        return v;
    }
};