//minimum amount of time to fill cups
class Solution {
public:
    int fillCups(vector<int>& amount) {
        int count=0;
        priority_queue<int>pq(amount.begin(),amount.end());
        while(pq.top()){
          int t1=pq.top();
          pq.pop();
          int t2=pq.top();
          pq.pop();

          pq.push(t1-1);
          pq.push(t2-1);
          count++;
        }

        return count;
    }
};