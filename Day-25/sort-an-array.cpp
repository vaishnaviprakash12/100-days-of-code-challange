class Solution {
public:

    void heapify(vector<int>&nums,int n,int i){
        int largest=i;
        int left=2*i+1;
        int right=2*i+2;

        if(left<n&&nums[largest]<nums[left]){
            largest=left;
        }
        if(right<n&&nums[largest]<nums[right]){
            largest=right;
        }

        if(largest!=i){
            swap(nums[largest],nums[i]);
            heapify(nums,n,largest);
        }
        
    }
    void buildHeap(vector<int>&nums){
        int n=nums.size();
        for(int i=(n/2)-1;i>=0;i--){
            heapify(nums,n,i);
        }
    }

    void heapSort(vector<int>&nums){
        int n=nums.size();
        buildHeap(nums);
        for(int i=n-1;i>0;i--){
            swap(nums[i],nums[0]);
            heapify(nums,i,0);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
       heapSort(nums);
       return nums;
    }
};