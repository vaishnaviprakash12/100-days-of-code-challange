class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int>st1(nums1.begin(),nums1.end());
       unordered_set<int>st2(nums2.begin(),nums2.end());

      vector<int>d1,d2;
      for(int num:st1){
          if(st2.count(num)==0){
              d1.push_back(num);
          }
      }

      for(int num:st2){
          if(st1.count(num)==0){
              d2.push_back(num);
          }
      }

      return {d1,d2};
    }
};