//1880. Check if Word Equals Summation of Two Words
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        string sum1="",sum2="",sum3="";
        for(int i=0;i<firstWord.size();i++){
            sum1+=to_string(firstWord[i]-'a');
        }
        for(int i=0;i<secondWord.size();i++){
            sum2+=to_string(secondWord[i]-'a');
        }
        for(int i=0;i<targetWord.size();i++){
            sum3+=to_string(targetWord[i]-'a');
        }

     if(stoi(sum1)+stoi(sum2)==stoi(sum3)){
         return true;
     }
     return false;
        
    }
};