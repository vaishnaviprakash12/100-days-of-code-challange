//1496. Path Crossing
class Solution {
public:
    bool isPathCrossing(string path) {
        int x=0;
        int y=0;
        map<pair<int,int>,bool>mp;
        mp[{0,0}]=true;

        for(auto i:path){
            if(i=='N'){
                y+=1;
            }
            else if (i=='S'){
                y+=-1;
            }
            else if(i=='E'){
              x+=1;
            }
            else if(i=='W'){
                x+=-1;
            }
            pair<int,int>p=make_pair(x,y);

            if(mp[p]){
                return true;
            }else{
                mp[p]=true;
            }
        }
        return false;
    }
};