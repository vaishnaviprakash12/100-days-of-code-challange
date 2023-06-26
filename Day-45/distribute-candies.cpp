575. Distribute Candies
class Solution {
public:
    int distributeCandies(vector<int>& candy) {
        set<int>st;
        int n=candy.size();
        for(int i:candy){
            st.insert(i);
        }
        if(st.size()>n/2){
           return n/2;
        }
        return st.size();
    }
};