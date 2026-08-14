class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int> count(26,0);
        int n=s.length();
        int maxi=0;
        int l=0;
        int r=0;
        for(l=0,r=0;r<n;r++){
            count[s[r]-'a']++;
            while(count [s[r]-'a']>2){
                count[s[l]-'a']--;
                l++;

            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};