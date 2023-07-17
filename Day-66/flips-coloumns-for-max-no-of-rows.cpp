// 1072. Flip Columns For Maximum Number of Equal Rows
class Solution
{
public:
    int maxEqualRowsAfterFlips(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;
        unordered_map<string, int> mp;
        for (int i = 0; i < m; i++)
        {
            string ptn = "T";
            for (int j = 1; j < n; j++)
            {
                if (matrix[i][j] == matrix[i][0])
                {
                    ptn += 'T';
                }
                else
                {
                    ptn += 'F';
                }
            }
            mp[ptn]++;
            ans = max(ans, mp[ptn]);
        }
        return ans;
    }
};