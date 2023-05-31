class Solution {
public:
    vector<vector<int>> spiralMatrix(int n, int m, ListNode* head) {
        vector <vector <int>> ans(n, vector <int>(m, -1));
        
        int x1 = 0, x2 = n - 1, y1 = 0, y2 = m - 1;
        while(head != nullptr){
            for(int j=y1; j<=y2 && head != nullptr; j++){
                ans[x1][j] = head->val;
                head = head->next;
            }
            
            x1++;
            for(int i=x1; i<=x2 && head != nullptr; i++){
                ans[i][y2] = head->val;
                head = head->next;
            }
            
            y2--;
            for(int j=y2; j>=y1 && head != nullptr; j--){
                ans[x2][j] = head->val;
                head = head->next;
            }
            
            x2--;
            for(int i=x2; i>=x1 && head != nullptr; i--){
                ans[i][y1] = head->val;
                head = head->next;
            }
            
            y1++;
        }
        
        return ans;
    }
};