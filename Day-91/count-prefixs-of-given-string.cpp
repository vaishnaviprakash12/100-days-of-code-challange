//2255. Count Prefixes of a Given String
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
       int count=0;
       for(string word:words){
           if(s.find(word)==0){
               count++;
           }
       }
       return count;
    }
};