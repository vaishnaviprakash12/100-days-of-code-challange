//477. Total Hamming Distance
class Solution
{
public:
    int totalHammingDistance(vector<int> &nums)
    {
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
            int ones = 0, zeros = 0;
            int k = (1 << i);
            for (int j = 0; j < n; j++)
            {
                if (nums[j] & k)
                {
                    ones++;
                }
                else
                {
                    zeros++;
                }
            }
            if (ones == n || zeros == n)
                continue;
            else
                ans += (ones * zeros);
        }
        return ans;
    }
};