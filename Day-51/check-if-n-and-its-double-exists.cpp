//1346. Check If N and Its Double Exist
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.first!=0&&mp.find((it.first)*2)!=mp.end()){
                return true;
            }
            else if(it.first==0&&mp[it.first]>=2) return true;
        }
        return false;
    }
};