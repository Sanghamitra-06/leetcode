class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int dup=-1;
        int miss=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                dup=nums[i];

            }
            else if(nums[i+1]>nums[i]+1){
                miss=nums[i]+1;
            }
        }
        if (nums[n - 1]!=n){
            miss=n;
        }
        return{dup,miss};
    }
};