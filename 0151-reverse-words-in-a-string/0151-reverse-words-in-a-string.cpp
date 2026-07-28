class Solution {
public:
    string reverseWords(string s) {
        int n=s.length();
        reverse(s.begin(),s.end());
        int right=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                if(right!=0) s[right++]=' ';
                int end=i;
            while (end<n && s[end]!= ' ') {
                s[right++] = s[end++];
            }
            reverse(s.begin()+right-(end-i),s.begin()+right);
            i=end-1;
            }
        }
        s.erase(s.begin()+right,s.end());
    return s;
        
    }
};