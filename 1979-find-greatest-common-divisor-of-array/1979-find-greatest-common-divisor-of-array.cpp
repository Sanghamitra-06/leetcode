class Solution {
public:
int gcd(int a, int b){
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }

    int findGCD(vector<int>& nums) {
        int max=INT_MIN;
        int min=INT_MAX;
        for(int num:nums){
            if(num<min) min=num;
            if(num>max) max=num;
        }
        return gcd(max,min);

        
    }
};