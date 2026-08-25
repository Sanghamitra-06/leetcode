class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int> numset(nums.begin(), nums.end());
    int i = 1;
    while (true) {
        int multiple = k * i;
        if (numset.find(multiple) == numset.end()) {
            return multiple;
        }
        i++;
        
    }
    }
};