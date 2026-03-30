class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size(), m = board[0].size();
        vector<unordered_set<char>> rows(9), cols(9), boxes(9);
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                char val = board[i][j];
                
                if(val == '.')  continue;

                if(rows[i].count(val) || cols[j].count(val) || boxes[(i/3)*3 + (j/3)].count(val)){
                    return false;
                }

                rows[i].insert(val);
                cols[j].insert(val);
                boxes[ (i/3)*3 + (j/3)].insert(val);
            }
        }
        return true;
    }
};
