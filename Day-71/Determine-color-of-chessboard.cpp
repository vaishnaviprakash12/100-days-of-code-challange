//1812. Determine Color of a Chessboard Square
class Solution {
public:
    bool squareIsWhite(string cand) {
        if(cand[0]%2==0&&cand[1]%2!=0) return true;
        else if (cand[0]%2!=0&&cand[1]%2==0) return true;
        else return false;
    }
};