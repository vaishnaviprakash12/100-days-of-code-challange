class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int sizeOfOrg=original.size();

        if(sizeOfOrg!=m*n){
            return {};
        }
        int row=0;
        int col=0;
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<sizeOfOrg;i++){
             if(col==n){
                 row++;
                 col=0;
             }

             ans[row][col++]=original[i];
        }
        return ans;
    }
};