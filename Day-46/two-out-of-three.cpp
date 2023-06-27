class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        map<int,int>mp;
        set<int>st1;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            st1.insert(nums1[i]);
        }
          set<int>st2;
        for(int i=0;i<nums2.size();i++){
            st2.insert(nums2[i]);
        }
          set<int>st3;
        for(int i=0;i<nums3.size();i++){
            st3.insert(nums3[i]);
        }

        for(auto i:st1){
            mp[i]++;
        }
        for(auto i:st2){
            mp[i]++;
        }
        for(auto i:st3){
            mp[i]++;
        }

        for(auto it:mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};