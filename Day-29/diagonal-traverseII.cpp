#define pi pair<pair<int,int>,int>
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
       priority_queue<pi,vector<pi>,greater<pi>>pq;
        int n=nums.size();

        for(int i=0;i<n;i++){
            for(int j=0;j<nums[i].size();j++){
                pq.push({{i+j,j},nums[i][j]});
            }
        }
        vector<int>result;
        while(!pq.empty()){
            auto curr=pq.top();
            pq.pop();
            result.push_back(curr.second);
        }
        return result;
    }
};