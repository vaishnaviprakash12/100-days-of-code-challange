class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
       int count=0;
        for(int i=0;i<n;i++){ 
          for(int j=0;j<m;j++){
            if(mat[i][j]==1){
                int colSum=0;
                int rowSum=0;
                for(int r=0;r<n;r++){
                    colSum+=mat[r][j];
                }
                for(int c=0;c<m;c++){
                    rowSum+=mat[i][c];
                }

                if(colSum==1&&rowSum==1){
                    count++;
                }
            }
             
          }
        }
        return count;
    }
};