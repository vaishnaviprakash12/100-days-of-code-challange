//1342. Number of Steps to Reduce a Number to Zero

class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0){
            return num;
        }
        return 1+(num%2==0?numberOfSteps(num/2):numberOfSteps(num-1));
    }
};