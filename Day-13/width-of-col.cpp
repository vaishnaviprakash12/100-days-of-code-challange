class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans;
        for(int j=0;j<m;j++){
            int maxVal=0;
            for(int i=0;i<n;i++){
                int len=0;
                if(grid[i][j]<0){
                    len++;
                }
                string temp=to_string(abs(grid[i][j]));
                len+=temp.size();
                maxVal=max(maxVal,len);
            }
            ans.push_back(maxVal);
        }
        return ans;
    }
};