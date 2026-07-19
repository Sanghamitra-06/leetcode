class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        
    stack<int> stk;
    int n = asteroids.size();
    
    for(int i = 0; i < n; i++) {
        if(asteroids[i] > 0) {
            stk.push(asteroids[i]);
        } else {
            bool exploded = false;
            while(!stk.empty() && stk.top() > 0) {
                if(stk.top() < abs(asteroids[i])) {
                    stk.pop();
                    continue;
                } else if(stk.top() == abs(asteroids[i])) {
                    stk.pop();
                }
                exploded = true;
                break;
            }
            if(!exploded) {
                stk.push(asteroids[i]);
            }
        }
    }
    
    vector<int> ans(stk.size());
    for(int i = ans.size() - 1; i >= 0; i--) {
        ans[i] = stk.top();
        stk.pop();
    }
    return ans;
}

    
};
        