//125. Valid Palindrome
class Solution {
bool valid(char ch){
    if((ch>='a'&&ch<='z')|| (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9')){
        return 1;
    }
    return 0;
}

bool checkPalindrome(string s){
    int st=0;
    int e=s.length()-1;
    while(st<=e){
        if(s[st]!=s[e]){
            return 0;
        }
        else {
            st++;
            e--;
        }
    }
    return 1;
}
public:
    bool isPalindrome(string s) {
        //removing all non alphanumeric characters
        string temp="";
        for(int j=0;j<s.length();j++){
            if(valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        //change to lowercase
        for(int j=0;j<temp.length();j++){
            temp[j]=tolower(temp[j]);
        }
        return checkPalindrome(temp);
    }
};