class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
    int sum=0;
    long long mod=(int)(1e9+7);
    int n = arr.size();
        stack<int> st; 
        
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || arr[st.top()] >= arr[i])) {
                int mid = st.top();
                st.pop();
                
                int left_bound = st.empty() ? -1 : st.top();
                int right_bound = i;
                
                long long count = (1LL * (mid - left_bound) * (right_bound - mid)) % mod;
                sum = (sum + (arr[mid] * count) % mod) % mod;
            }
            st.push(i);
        }
    return sum;
        
    }
};