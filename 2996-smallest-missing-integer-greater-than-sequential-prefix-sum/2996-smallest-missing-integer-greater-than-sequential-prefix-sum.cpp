class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=1;i<n;i++){
            if(sum==0 && nums[i]==nums[i-1]+1){
            sum+=nums[i-1]+nums[i];}
            else if(sum!=0 && nums[i]==nums[i-1]+1){
                sum+=nums[i];
            }
            else 
            break;
        }

            if(sum==0){
                sum+=nums[0];
            }
           
           while(std::find(nums.begin(), nums.end(), sum) != nums.end()){
            sum++;
           }
        return sum;
        
    }
};