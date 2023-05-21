class Solution {

    int n;
    vector<vector<int>>ans;
    vector<int>temp;

    void helper(vector<int>&nums,vector<bool>&taken){
         if(temp.size()==n){
            ans.push_back(temp);
            return;
         }

         for(int i=0;i<n;i++){
             if(i>0&&nums[i]==nums[i-1]&&!taken[i-1]){
                continue; 
             }
             if(!taken[i]){
            temp.push_back(nums[i]);
             taken[i]=true;
             helper(nums,taken);
             taken[i]=false;
             temp.pop_back();
             }
             
         }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        vector<bool>taken(n,false);
        sort(nums.begin(),nums.end());
        helper(nums,taken);
        return ans;
    }
};