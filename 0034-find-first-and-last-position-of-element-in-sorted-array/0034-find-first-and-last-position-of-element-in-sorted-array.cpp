class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound(nums, n, target);
        if (lb == n || nums[lb] != target) {
            return {-1, -1};
        }
        
        int ub = upperbound(nums, n, target);
        return {lb, ub - 1};
    }

private:
    int lowerbound(vector<int>& nums, int n, int x) {
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= x) {
                ans = mid;
                high = mid - 1; 
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperbound(vector<int>& nums, int n, int x) {
        int low = 0, high = n - 1;
        int ans = n;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > x) {
                ans = mid;
                high = mid - 1; // Look for smaller index on the left
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
