class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0;
        for(int p=0;p<accounts.size();p++){
            int rowSum=0;

            for(int acc=0;acc<accounts[p].size();acc++){
                rowSum+=accounts[p][acc];
            }
            if(rowSum>ans){
                ans=rowSum;
            }
        }
        return ans;
    }
};