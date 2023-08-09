//2616. Minimize the Maximum Difference of Pairs
class Solution {
public:
    bool canweplace(vector<int>& nums, int mid,int p){
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]<=mid){
                count++;
                i++;
            }
        }
        return count>=p;
    }
    int minimizeMax(vector<int>& nums, int p) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int low=0,high=nums[n-1]-nums[0];
        int ans=0;

        while(low<=high){
            int mid=(low+high)/2;
            if(canweplace(nums,mid,p)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};