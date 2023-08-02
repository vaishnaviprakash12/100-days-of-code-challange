//2053. Kth Distinct String in an Array
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
       for(int i=0;i<arr.size();i++){
           if(mp[arr[i]]==1){
               k--;
           }
           if(k==0){
               return arr[i];
           }
       }
       return "";
    }
};