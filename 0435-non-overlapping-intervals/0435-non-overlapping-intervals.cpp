class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()) return 0;
        
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        int cnt = 1;
        int last = intervals[0][1];
        int n = intervals.size();
        
        for(int i = 1; i < n; i++){
            if(intervals[i][0] >= last){
                cnt += 1;
                last = intervals[i][1];
            }
        }
        
        return n - cnt;
    }
};
