class Solution {
public:
    bool isPal(const string& s,int left,int right) {
        
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s){
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left < right){
            if(s[left]!=s[right]){
                return isPal(s,left+1,right) || isPal(s,left,right-1);
            }
            left++;
            right--;
        }
        return true;
    }
};