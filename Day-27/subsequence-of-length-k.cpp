class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<int>res;
        int n=nums.size();
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(!pq.empty()&&k!=0){
            auto a=pq.top();
            res.push_back(a.second);
            pq.pop();
            k--;
        }
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++){
            res[i]=nums[res[i]];
        }
        return res;
    }
};