//2595. Number of Even and Odd Bits
class Solution {
public:
    vector<int> evenOddBit(int n) {
        int even=0, odd=0;
        for(int i=0;i<32;i++){
            int bit=0;
            if((1<<i)&n) bit=1;
          if(i%2 == 0 && bit ==1) even++;
            else if(i%2!=0&&bit==1) odd++;

        }
        return {even,odd};
    }
};