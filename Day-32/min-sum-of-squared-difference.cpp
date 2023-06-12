typedef long long int ll;
const int N = 1e5;
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        vector<int> cnt (N+1, 0);
        for (int j = 0; j < nums1.size(); j ++) {
            cnt[abs(nums1[j] - nums2[j])] ++;
        }
        
        int operations = k1+k2;
        for (int dif = N; dif > 0; dif --) {
            if (cnt[dif] == 0) continue;
            
            if (operations >= cnt[dif]) {
                cnt[dif-1] += cnt[dif];
                operations -= cnt[dif];
                cnt[dif] = 0;
            }
            else {
                cnt[dif-1] += operations;
                cnt[dif] -= operations;
                operations = 0;
                break;
            }
        }
        
        ll ans = 0;
        for (ll j = 1; j <= N; j ++) 
            if (cnt[j] > 0) ans += j*j*cnt[j];
        
        return ans;
    }
};