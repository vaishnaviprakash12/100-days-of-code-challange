//determine wheather the matrix can obtained by rotation

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int m = mat.size();
        int n = mat[0].size();

        bool one = true, two = true, three = true, four = true;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){

                if(mat[i][j] != target[j][n-i-1]){
                    one = false;
                }

              
                if(mat[i][j] != target[m-i-1][n-j-1]){
                    two = false;
                }

                if(mat[i][j] != target[n-j-1][i]){
                    three = false;
                }

                if(mat[i][j] != target[i][j]){
                    four = false;
                }
            }
        }

        return one||two||three||four;
    }
};