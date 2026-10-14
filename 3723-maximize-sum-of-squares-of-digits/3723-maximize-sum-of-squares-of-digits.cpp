class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9) {
            return ""; 
        }
        string result = "";
        
        int nines = sum / 9;
        result.append(nines, '9');
        
        int remainder = sum % 9;
        if (result.length() < num && remainder > 0) {
            result += to_string(remainder);
        }
        
        if (result.length() < num) {
            result.append(num - result.length(), '0');
        }
        return result;
        
    }
};