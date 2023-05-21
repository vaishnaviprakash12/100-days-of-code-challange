class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int begin,int n,int k,vector<int>&v){
        //base case
        if(n==0&&k==v.size()){
            ans.push_back(v);
            return;
        }
        for(int i=begin;i<=9;i++){
        v.push_back(i);
         
         backtrack(i+1,n-i,k,v);v.pop_back();
         
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
       vector<int>v;
       backtrack(1,n,k,v);
       return ans;
    }
};