//largest numbers after digit swaps by parity
class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        int n=s.size();
       priority_queue<int>odd;
       priority_queue<int>even;
       int result=0;
        for(int i=0;i<n;i++){
           if((s[i]-'0')%2==0){
               even.push(s[i]-'0');
           }
           else {
               odd.push(s[i]-'0');
           }
        }

        for(int i=0;i<n;i++){
            result=result*10;
            if((s[i]-'0')%2==0){
                result+=even.top();
                even.pop();
            }
            else {
                result+=odd.top();
                odd.pop();
            }
        }
        return result;
    }
};