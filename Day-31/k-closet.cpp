class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<k;i++){
            pq.push(arr[i]);

        }

        for(int i=k;i<arr.size();i++){
            int curr=pq.top();
            pq.pop();

            if(arr[i]>curr&&abs(curr-x)>abs(arr[i]-x)){
                pq.push(arr[i]);
            }
            else{
                pq.push(curr);
            }
        }

        while(!pq.empty()){
            int curr=pq.top();
            pq.pop();
            ans.push_back(curr);
        }
        sort(ans.begin(),ans.end());

        return ans;
    }
};
