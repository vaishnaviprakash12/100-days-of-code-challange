//largest local values in matrix
class Solution {
public:
    int findMax(vector<vector<int>>&grid,int i,int j){
        int maxVal=INT_MIN;
        for(int x=i;x<i+3;x++){
            for(int y=j;y<j+3;y++){
                maxVal=max(grid[x][y],maxVal);
            }
           
        } return maxVal;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> v(n-2,vector<int>(n-2));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                v[i][j]=findMax(grid,i,j);
            }

        }
        return v;
    }
};