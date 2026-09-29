class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> count;
        for (char c : s) {
            count[c]++;
        }
        
        int length = 0;
        bool oddFound = false;
        
        for (const auto& pair : count) {
            if (pair.second % 2 == 0) {
                length += pair.second;
            } else {
                length += pair.second - 1;
                oddFound = true;
            }
             }
        
        if (oddFound) {
            length += 1;
        }
        
        return length;
    
    }
};