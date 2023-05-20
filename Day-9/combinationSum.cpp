class Solution {
public:
    void findCombination(int i,int target,vector<int>&arr,vector<vector<int>>&ans,vector<int>v){
       //base case
       if(i==arr.size()){
           if(target==0){
               ans.push_back(v);
           }
           return;
       }

       //pick up element case

       if(arr[i]<=target){
           v.push_back(arr[i]);
           findCombination(i,target-arr[i],arr,ans,v);
           v.pop_back();
       }

       //non pick element case

       findCombination(i+1,target,arr,ans,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        findCombination(0,target,candidates,ans,v);
        return ans;
    }
};