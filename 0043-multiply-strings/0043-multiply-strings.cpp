class Solution {
public:
    string multiply(string num1, string num2) {
       if(num1=="0" || num2=="0") return "0";
       int n=num1.size();
       int m=num2.size();
       vector<int> result(n + m, 0);
       for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
        int p1 = i + j;
            int p2 = i + j + 1;
             int sum = mul + result[p2];
            
            result[p1] += sum / 10;  
            result[p2] = sum % 10;
    }
       }
       int i = 0;
    while (i < result.size() && result[i] == 0) {
        i++;
    }
    string productStr = "";
    for (; i < result.size(); ++i) {
        productStr.push_back(result[i] + '0');
    }
    
    return productStr;
}
};