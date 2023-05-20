class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int begin,int k,vector<int>&current,int n){
        if(current.size()==k){
            ans.push_back(current);
            return;
        }

        for(int i=begin;i<n+1;i++){
            current.push_back(i);
            backtrack(i+1,k,current,n);
            current.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        backtrack(1,k,current,n);
        return ans;
    }
};