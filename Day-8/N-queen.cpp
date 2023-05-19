class Solution {
public:
    vector<vector<string>>sols;
    bool isSafe(vector<string>&board,int row,int col){
        int n=size(board);
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q') return false;
            if(row-i>=0&&col-i>=0&&board[row-i][col-i]=='Q') return false;
            if(row-i>=0&&col+i<n&&board[row-i][col+i]=='Q') return false;
        }
        return true;
    }
    //solve function
     
    void solve(vector<string>&board,int row){
        //base case
        if(row==size(board)){
            sols.push_back(board);
            return;
        }
        for(int col=0;col<size(board);col++){
            if(isSafe(board,row,col)){
                board[row][col] ='Q';
                //call for next
                solve(board,row+1);
                //backtrack
                board[row][col]='.';
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        solve(board,0);
        return sols;
    }
};