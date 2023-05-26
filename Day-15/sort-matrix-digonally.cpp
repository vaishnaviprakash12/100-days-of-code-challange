class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        
        // going down the rows diagonally
        for(int i=0; i<r-1; i++) {

            vector<int> temp;
            for(int k=i, j=0; k<r && j<c; ) 
                temp.push_back(mat[k++][j++]);
            
            sort(temp.begin(), temp.end());
            
            int tempi=0;

            for(int k=i, j=0; k<r && j<c; )
                mat[k++][j++] = temp[tempi++];
        }
        
        // going across the columns diagonally
        for(int j=1; j<c-1; j++) {

            vector<int> temp;
            for(int k=j, i=0; i<r && k<c; ) 
                temp.push_back(mat[i++][k++]);
            
            sort(temp.begin(), temp.end());
            
            int tempi=0;

            for(int k=j, i=0; i<r && k<c; )
                mat[i++][k++] = temp[tempi++];
        }
        return mat;
    }
};