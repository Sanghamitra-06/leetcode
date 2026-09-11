class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int freq[10]={0};
        for(int digit:digits){
            freq[digit]++;
        }
        int cnt=0;
        for (int num=100;num<1000;num+=2){
            int d1=num/100;
            int d2=(num/10)%10;
            int d3=num%10;
            int need[10]={0};
            need[d1]++;
            need[d2]++;
            need[d3]++;
            if(freq[d1]>=need[d1] && freq[d2]>=need[d2] && freq[d3]>=need[d3]){
                cnt++;
            }
 
       }
       return cnt;

        
    }
};