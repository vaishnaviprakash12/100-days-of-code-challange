class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>matrix(n,vector<int>(n));
       int up=0, down=n-1, left=0,right=n-1,ct=1;
       while(ct<=n*n){
           for(int j=left;j<=right&&ct<=n*n;j++){
               matrix[up][j]=ct++;
           }

           for(int i=up+1;i<=down-1&&ct<=n*n;i++){
               matrix[i][right]=ct++;
           }

           for(int j=right;j>=left&&ct<=n*n;j--){
               matrix[down][j]=ct++;
           }
           for(int i=down-1;i>=up+1&&ct<=n*n;i--){
               matrix[i][left]=ct++;
           }

           left++;right--;up++;down--;
       }
       return matrix;
    }
};