class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        priority_queue<int>q;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<m;i++){
           q.push(mat[0][i]);
        }
        for(int i=1;i<n;i++){
            priority_queue<int>pnew;
            while(!q.empty()){
                int top=q.top();
                q.pop();
                for(int j=0;j<m;j++){
                    int num=top+mat[i][j];
                    if(pnew.size()<k)pnew.push(num);
                    else{
                        if(num<pnew.top()){
                            pnew.pop();
                            pnew.push(num);
                        }
                    }
                }
            }
            q=pnew;
        }
        return q.top();
    }
};