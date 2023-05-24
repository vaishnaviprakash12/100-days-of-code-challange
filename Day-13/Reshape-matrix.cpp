class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>ans;
        if((n*m)!=(r*c)){
            return mat;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans.push_back(mat[i][j]);
            }
        }
        vector<vector<int>>res(r,vector<int>(c));
        int k=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                res[i][j]=ans[k++];
            }
        }
        return res;
    }
};