//2442. Count Number of Distinct Integers After Reverse Operations
class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>st;
        for(auto n:nums){
            st.insert(n);
            int r=0;
            while(n){
                r=r*10+n%10;
                n=n/10;
            }
            st.insert(r);
        }
        return st.size();
    }
};