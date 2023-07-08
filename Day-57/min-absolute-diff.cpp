//1200. Minimum Absolute Difference
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int minValue=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
           minValue=min(minValue,arr[i+1]-arr[i]);
        }

       for(int i=0;i<arr.size()-1;i++){
           if(arr[i+1]-arr[i]==minValue){
               ans.push_back({arr[i],arr[i+1]});
           }
       }
       return ans;
    }
};