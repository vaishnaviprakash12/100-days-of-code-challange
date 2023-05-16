class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int i=0;
        int j=0;
        int count=0;
        int sum=0;
        int avg=0;
        while(j<n){
           sum+=arr[j];
           if(j-i+1<k) j++;
           else if (j-i+1==k){
              avg=sum/k;
              sum=sum-arr[i];
              i++;
              j++; if(avg>=threshold){
               count++;
              }
           }
          
           
        }

        return count;
    }
};