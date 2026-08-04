class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> result;
        int n=nums.size();
        int low=0;
        int high=n-1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<high;i++){
            if(nums[i+1]>nums[i]+1){
                 for (int j= nums[i] + 1; j < nums[i + 1]; j++) {
            result.push_back(j);
            }
        }
        }
        return result;
    }
        
        
    
};