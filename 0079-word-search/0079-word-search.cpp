class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        if(word.length()>m*n) return false;
        unordered_map<char,int>bfreq,wfreq;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                bfreq[board[i][j]]++;
            }
        }
        for(char c:word){
            wfreq[c]++;
            if(wfreq[c]>bfreq[c]) return false;
        }
        if(bfreq[word.back()]< bfreq[word.front()]){
            reverse(word.begin(),word.end());
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (board[i][j] == word[0]) {
                    if (dfs(board, word, i, j, 0)) return true;
                }
            }
        }

        return false;
    }
    bool dfs(vector<vector<char>>& board, const string& word, int r, int c, int index) {
        if (index == word.length()) return true;

        int m = board.size();
        int n = board[0].size();
        if (r < 0 || r >= m || c < 0 || c >= n || board[r][c] != word[index]) {
            return false;
        }
        char temp = board[r][c];
        board[r][c] = '#';
        bool found = dfs(board, word, r + 1, c, index + 1) ||
                     dfs(board, word, r - 1, c, index + 1) ||
                     dfs(board, word, r, c + 1, index + 1) ||
                     dfs(board, word, r, c - 1, index + 1);
                     board[r][c]=temp;
                     return found;
    }
};