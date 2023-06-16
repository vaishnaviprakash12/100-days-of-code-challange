//decode xor array
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int n=encoded.size();
        vector<int>v;
        v.push_back(first);
        int ele=first;
        for(int i=0;i<n;i++){
            int temp=ele^encoded[i];
            ele=temp;
            v.push_back(ele);
        }
        return v;
    }
};