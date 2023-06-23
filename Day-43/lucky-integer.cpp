//1394. Find Lucky Integer in an Array

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mp;
        int n=arr.size();
        int ans=-1;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.first==it.second) ans=max(ans,it.first);
        }
        return ans;
    }
};