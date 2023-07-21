//2073. Time Needed to Buy Tickets
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time=0;
        queue<int>q;
        int n=tickets.size();
        for(int i=0;i<n;i++){
            q.push(i);
        }

        while(true){
            if(tickets[k]==0) break;
            int curr=q.front();
            time++;
            tickets[curr]--;
            q.pop();
            if(tickets[curr]!=0){
                q.push(curr);
            }
        }
        return time;
    }
};