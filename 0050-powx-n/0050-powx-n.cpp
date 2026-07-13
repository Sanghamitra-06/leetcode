class Solution {
public:
    double myPow(double x, int n) {
          long long num = n;
          if(x<0){
            return (1/pow(x,-1*num));
          }
          return pow(x,num);
    
        
    }
};