vector<vector<int>> solve(vector<vector<int>>& matrix) {
    if(matrix.size()==0)
        return matrix;
    int m = matrix.size();
    int n = matrix[0].size();
    for(int i=0;i<m;i++){
        for(int j=i;j<n;j++){
            int x = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = x;
        }
    }

    return matrix;
}
