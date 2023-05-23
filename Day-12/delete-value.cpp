//Delete greatest value in each row
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        for(int i=0;i<n;i++){
            sort(grid[i].begin(),grid[i].end());
        }

        for(int i=0;i<m;i++){  
             int ans=INT_MIN;
            for(int j=0;j<n;j++){
               
                ans=max(ans,grid[j][i]);
            }
            res+=ans;
        }
        return res;
    }
};