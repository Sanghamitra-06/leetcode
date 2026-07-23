class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxid=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>maxid) return false;
            maxid=max(maxid,i+nums[i]);
        }
        return true;
        
    }
};