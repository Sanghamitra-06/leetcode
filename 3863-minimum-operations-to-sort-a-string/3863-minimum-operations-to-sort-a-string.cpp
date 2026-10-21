class Solution {
public:
    int minOperations(string s) {
         int n = s.length();
        
        if (std::is_sorted(s.begin(), s.end())) {
            return 0;
        }
        
        if (n == 2) {
            return -1;
        }
        
        char min_char = *std::min_element(s.begin(), s.end());
        char max_char = *std::max_element(s.begin(), s.end());
        
        if (s[0] == min_char || s[n - 1] == max_char) {
            return 1;
        }
        if (s[0] == max_char && s[n - 1] == min_char) {
            bool min_in_prefix = (std::find(s.begin(), s.end() - 1, min_char) != s.end() - 1);
            bool max_in_suffix = (std::find(s.begin() + 1, s.end(), max_char) != s.end());
            
            if (!min_in_prefix && !max_in_suffix) {
                return 3;
            }
        }
        
        return 2;
    }
};