//N-queen ||
class Solution {
public:
   bool isSafe(vector<vector<int>>&board,int row,int col,int n){
       int x=row;
       int y=col;
       while(y>=0){
           if(board[x][y]==1){
               return false;
           }
           y--;
       }
       //diagonal check
       //upward
       x=row;
       y=col;
       while(x>=0&&y>=0){
           if(board[x][y]==1) return false;
           x--;
           y--;
       }

       //diagonal check
       //dowwnward
       x=row;
       y=col;
       while(x<n&&y>=0){
           if(board[x][y]==1) return false;
           y--;
           x++;
       }
       return true;
   }
   void solve(int col,vector<vector<int>>&board,int n,int &count){
       if(col==n){
           count++;
           return;
       }
       for(int row=0;row<n;row++){
           if(isSafe(board,row,col,n)){
               board[row][col]=1;

               solve(col+1,board,n,count);
               //backtrack

               board[row][col]=0;
           }
       }
   }
    int totalNQueens(int n) {
        vector<vector<int>>board(n,vector<int>(n,0));
        int count=0;
        solve(0,board,n,count);
        return count;
    }
};