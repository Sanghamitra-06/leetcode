class Solution {
public:
bool palindrome(const std::string& s,int left,int right) {
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        
        int n=s.length();
        if(n<=1)return s;
        int st=0;
        int max=1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(j-i+1>max){
                    if(palindrome(s,i,j)){
                        st=i;
                        max=j-i+1;

                    }
                }
            }
        }
        return s.substr(st,max);
        
        
    }
};