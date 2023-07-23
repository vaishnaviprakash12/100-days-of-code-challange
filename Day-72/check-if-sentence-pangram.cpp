//1832. Check if the Sentence Is Pangram
class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int>v(26,0);
        for(int i=0;i<sentence.size();i++){
            int index=(sentence[i]-'a');
            v[index]++;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                return false;
            }
        }
        return true;
    }
};