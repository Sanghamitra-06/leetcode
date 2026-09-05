class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0) return -1;
        vector<int> min_r(n);
        min_r[n-1]=nums[n-1];
        for (int i=n-2;i>=0;i--) {
            min_r[i] =min(nums[i],min_r[i + 1]);
        }
        int max_left=INT_MIN;
        for(int i=0;i<n;i++){
            max_left=max(max_left,nums[i]);
            if(max_left-min_r[i]<=k){
                return i;
            }
        }
        return -1;
    }
};