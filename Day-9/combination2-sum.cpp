class Solution {
public:
   vector<vector<int>>ans;
   void backtrack(int idx,int target,vector<int>&arr,vector<int>v){
       if(target==0){
           ans.push_back(v);
            return;
       }
      for(int i=idx;i<arr.size();i++){
          if(i>idx&&arr[i]==arr[i-1]) continue;
          if(arr[i]>target) break;
          v.push_back(arr[i]);
          backtrack(i+1,target-arr[i],arr,v);
          v.pop_back();
      }

       
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        backtrack(0,target,candidates,v);
        return ans;
    }
};