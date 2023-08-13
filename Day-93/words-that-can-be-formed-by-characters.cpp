//1160. Find Words That Can Be Formed by Characters
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char, int> st;
        for (auto s : chars) {
            st[s]++;
        }
        int ans = 0;

        for (auto x : words) {
            string temp = x;
            bool flag = true; 
            unordered_map<char, int> word_chars; 

            for (int i = 0; i < temp.size(); i++) {
                word_chars[temp[i]]++;

                if (word_chars[temp[i]] > st[temp[i]]) { 
                    flag = false;
                    break; 
                }
            }

            if (flag == true) {
                ans += temp.size();
            }
        }
        return ans;
    }
};
