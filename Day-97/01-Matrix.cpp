//542. 01 Matrix
// BFS 
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n= mat.size(); int m= mat[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        vector<vector<int>> ans(n,vector<int>(m,0));
        queue<pair<int,pair<int,int>>> q;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (mat[i][j]==0){
                    ans[i][j]=0;
                    vis[i][j]=1;
                    q.push({0,{i,j}});
                }
            }
        }
        int dx[]= {0,0,1,-1};
        int dy[]= {1,-1,0,0};
        while (!q.empty()){
            int x= q.front().second.first;
            int y= q.front().second.second;
            int dis = q.front().first;
            dis++;
            q.pop();
            for (int i=0; i<4; i++){
                int nr = x+dx[i];
                int nc = y+dy[i];
                if (nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && mat[nr][nc]==1){
                    vis[nr][nc]=1;
                    ans[nr][nc]= dis;
                    q.push({dis,{nr,nc}});
                }
            }
        }
        return ans;
    }
};