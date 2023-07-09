//1385. Find the Distance Value Between Two Arrays
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        for(auto it:arr1){
            int flag=0;
            for(auto it1:arr2){
               if(abs(it-it1)>d){
                   flag=1;
               }
               else {
                   flag=0;
                   break;
               }
            }
            if(flag==1) count++;
        }
        return count;
    }
};