class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        deque<int>q;
        int i=0,j=0;
        vector<int>res;
        while(j<n){
            while(!q.empty()&&q.back()<nums[j])   q.pop_back();
            q.push_back(nums[j]);
            if(j-i+1<k)j++;
            else if (j-i+1==k){
                res.push_back(q.front());
                if(q.front()==nums[i]) q.pop_front();
                   
                i++;
                j++;
            }

        }
        return res;
    }
};