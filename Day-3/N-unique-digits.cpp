class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
       
        if(n%2==0){
            for(int i=1;i<=n/2;i++){
                v.push_back(i);
                v.push_back(i*-1);
            }
        }
        else{
             int sum=0;
             for(int i=1;i<n;i++){
                 v.push_back(i);
                 sum=sum+i;
             }
             v.push_back(-sum);
        }
        return v;
    }

};