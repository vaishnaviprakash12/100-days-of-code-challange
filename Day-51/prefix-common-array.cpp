//2657. Find the Prefix Common Array of Two Arrays
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_set<int>mp;
        vector<int>res;
        int count=0;
        for(int i=0;i<A.size();i++){
            if(A[i]==B[i]){
                count++;
            }
            else{
                if(mp.find(A[i])!=mp.end()) count++;
                else mp.insert(A[i]);

                if(mp.find(B[i])!=mp.end())count++;
                else mp.insert(B[i]);
            }  res.push_back(count);
        }
        
        return res;

    }
};