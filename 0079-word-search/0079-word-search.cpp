class Solution {
public:
    bool print(int i, int j, vector<vector<char>> & board, vector<vector<bool>>& visited, string word, int k){
        if(k == word.size()){
            return true;
        }
        int r = board.size();
        int c = board[0].size();
        
        if (i < 0 || i >= r || j < 0 || j >= c || board[i][j] != word[k] || visited[i][j]) {
            return false;
        }
        visited[i][j] = true;
        if(print(i, j+1, board, visited, word, k+1)){
            return true;
        }
        if(print(i+1, j, board,visited, word, k+1)){
            return true;
        }
        if(print(i, j-1, board,visited, word, k+1)){
            return true;
        }
        if(print(i-1, j, board,visited, word, k+1)){
            return true;
        }
        visited[i][j] = false;
        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        vector<vector<bool>> visited(rows, vector<bool>(cols, false));

        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(print(i, j, board, visited, word, 0)){
                    return true;
                }
            }
        }
        return false;
    }
};