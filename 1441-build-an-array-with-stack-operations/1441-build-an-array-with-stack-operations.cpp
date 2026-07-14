class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> stk;
        int start_num=1;
        for(int num:target){
            while(start_num<num){
            stk.push_back("Push");
            stk.push_back("Pop");
            start_num++;
        }
        stk.push_back("Push");
        start_num++;
        }
        return stk;
        
    }
};