//2042. Check if Numbers Are Ascending in a Sentence
class Solution {
public:
    bool areNumbersAscending(string s) {
        stringstream words(s);
        string word;
        int k = INT_MIN;
        while(words >> word)
            if(isdigit(word[0]))   
                if(stoi(word) - '0' > k) k = stoi(word) - '0';
                else return false;
        return true;
    }
};