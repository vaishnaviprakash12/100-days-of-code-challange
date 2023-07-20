//950. Reveal Cards In Increasing Order
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        sort(deck.begin(),deck.end());
        vector<int>ans(n,0);
        queue<int>q;
        int i=0;
        while(i<n){
            q.push(i);i++;
        }
        for(int i=0;i<n;i++){
            ans[q.front()]=deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }

        return ans;
    }
};