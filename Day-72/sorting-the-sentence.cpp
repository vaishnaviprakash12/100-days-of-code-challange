//1859. Sorting the Sentence
class Solution {
public:
    string sortSentence(string s) {
        vector<string>words(10,"");
        for(int i=0;i<s.size();i++){
            int j=i;
            string word;
             while(!isdigit(s[j])){ 
                word.push_back(s[j]);
                j++;
            }
            words[s[j]-'0']=word;
            i=j+1;
        }
        string answer;
        for(int i=1;i<10;i++){
            if(words[i].length()>0){
                answer+=words[i];
                answer.push_back(' ');
            }
        }
        answer.pop_back();
        return answer;
    }
};