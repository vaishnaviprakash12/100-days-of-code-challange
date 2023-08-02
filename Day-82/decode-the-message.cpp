//2325. Decode the Message
class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char>mp;
        int counter=0;
        int idx=0;
        while(idx<key.length()){
            if(key[idx]==' '){
                idx++;
            }
            else if ((key[idx]>='a'&&key[idx]<='z')&&mp.find(key[idx])==mp.end()){
                char ch=char('a'+counter);
                mp[key[idx]]=ch;
                idx++;
                counter++;
            }
            else if(mp.find(key[idx])!=mp.end()){
                idx++;
            }
        }

        string result="";
        for(int i=0;i<message.length();i++){
            if(message[i]==' '){
               result.push_back(' ');
            }
            else if(message[i]>='a'&&message[i]<='z') {
                 result.push_back(mp[message[i]]);
            }
        }
        return result;
    }
};