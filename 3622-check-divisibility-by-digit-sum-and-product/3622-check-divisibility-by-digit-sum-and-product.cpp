class Solution {
public:
    bool checkDivisibility(int n) {
        if(n==0) return 0;
        int sum=0;
        int prod=1;
        int temp =n;
        while(temp>0){
            int digit=temp%10;
            sum+=digit;
            prod*=digit;
            temp/=10;
        }
        int t=sum+prod;
        return(n%t==0);

        
    }
};