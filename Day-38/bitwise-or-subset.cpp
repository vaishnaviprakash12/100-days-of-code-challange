//2044. Count Number of Maximum Bitwise-OR Subsets
class Solution {
public:
    int countMaxOrSubsets(vector<int>& v) {     
        int mxor=0;
        int ans=0;
        for(int i=0;i<v.size();++i)
        {
            mxor|=v[i];
        }
        int total=pow(2,(int)v.size());
        for(int i=0;i<total;++i)
        {
            int orr=0;
            for(int j=0;j<v.size();++j)
            {
                if(i&(1<<j)){
                    orr|=v[j];
                }
            }
            
            if(orr==mxor)
                ans++;
        }
        
        return ans;
    }

};