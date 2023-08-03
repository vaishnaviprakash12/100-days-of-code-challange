//17. Letter Combinations of a Phone Number
class Solution {
public:
    void Helper(int idx, int n, string &digits, vector<string> &dict, vector<string> &ans, string temp){

        if(idx==n){
            ans.push_back(temp);
            return;
        }
        string val = dict[digits[idx]-'0'];
        for(int i=0; i<val.size(); i++){
            temp+=val[i];
            Helper(idx+1,n,digits,dict,ans,temp);
            temp.pop_back(); // backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int n = digits.size();
        vector<string> dict = {"", "", "abc", "def", "ghi","jkl", "mno","pqrs", "tuv", "wxyz"};
        if(n==0)return ans; 
        Helper(0,n,digits,dict,ans,"");
        return ans;
    }
};