class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> row(n, 1);

        for(int i=0; i<m-1; ++i){
            vector<int> newRow(n, 1);
            for(int j=n-2; j>=0; --j){
                newRow[j] = newRow[1+j] + row[j];
            }
            row = newRow;
        }
        return row[0];
    }
};
