//score of array after marking all elements
#define ll long long int
class Solution {
public:
    long long findScore(vector<int>& nums) {
        set<pair<int,int>>s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            s.insert({nums[i],i});
        }
        ll ans=0;
        while(s.size()>0){
            auto p=*s.begin(); //get smallest ele
            int idx=p.second;  //get it index
            ans+=p.first;     //add score
            s.erase(p);       //erase element
            //left exists
            if(idx-1>=0){
                pair<int,int>p_left={nums[idx-1],idx-1};
                if(s.find(p_left)!=s.end()){
                    s.erase(p_left);
                }
            }
            //right exists
            if(idx+1<=n-1){
                pair<int,int>p_right={nums[idx+1],idx+1};
                if(s.find(p_right)!=s.end()){
                    s.erase(p_right);
                }
            }
        }
        return ans;
    }
};