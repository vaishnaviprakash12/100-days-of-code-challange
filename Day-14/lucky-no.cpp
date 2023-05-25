class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();    //rows
        int m=matrix[0].size(); //cols

        vector<int>colMax(m,INT_MIN);
        vector<int>rowMin(n,INT_MAX);

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowMin[i]=min(rowMin[i],matrix[i][j]);
                colMax[j]=max(colMax[j],matrix[i][j]);
            }
        }


        vector<int>res;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(rowMin[i]==matrix[i][j]&&colMax[j]==matrix[i][j]){
                    res.push_back(matrix[i][j]);
                }
            }
        }

        return res;
    }
};