class Solution {
public:
   //recursive way 
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        if(n==1) return true;

        return n%3==0 && isPowerOfThree(n/3);
    }
};


//iterative way
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return false;
        

      while(n>0){
          if(n%3==0){
              n=n/3;
          }
          else{
              break;
          }
      }if(n==1) return true;
      return false;
    }
};
