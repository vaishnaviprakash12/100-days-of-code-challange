//2586. Count the Number of Vowel Strings in Range
class Solution {
public:
    bool isVowel(char &ch){
        return ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; 
    }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            int n=words[i].length();

            if(isVowel(words[i][0])&&isVowel(words[i][n-1])){
                cnt++;
            }
        }
        return cnt;
    }
};