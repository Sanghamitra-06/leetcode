class Solution {
public:
    int minMoves(vector<int>& nums) {
        int min=*std::min_element(nums.begin(),nums.end());
        int move=0;
        for(int num:nums){
            move+=(num-min);
        }
        return move;
    }
};