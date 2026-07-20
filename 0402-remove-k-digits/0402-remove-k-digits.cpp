class Solution {
public:
    string removeKdigits(string num, int k) {
        string st="";
        int n=num.length();
        for(int i=0;i<n;i++){
            while(!st.empty() && k>0 && st.back()>num[i]){
                st.pop_back();
                k=k-1;
            }
            st.push_back(num[i]);
        }
        while(k>0 && !st.empty()) {
            st.pop_back();
        k--;
        }
        int stid=0;
        while(stid<st.size() && st[stid]=='0'){
            stid++;
        }
            string res=st.substr(stid);
            return res.empty()? "0" : res;
        
    }
};