//2544.Alternating digit sum
class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> v;
        while(n){
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(i%2==0)
            ans+=v[i];
            else ans-=v[i];
        }
        return ans;
    }
};