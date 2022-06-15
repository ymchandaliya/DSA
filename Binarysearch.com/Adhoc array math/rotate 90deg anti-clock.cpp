vector<vector<int>> solve(vector<vector<int>>& matrix) {
    
    int n = matrix.size();
    if(n==0)
        return matrix;
    int m = matrix[0].size();

    //Transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            int x = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = x;
        }
    }
    
    //Flip columns
    for(int i=0;i<m;i++){
        int b=0,e=n-1;
        while(b<e){
            int x = matrix[b][i];
            matrix[b][i] = matrix[e][i];
            matrix[e][i] = x;
            b++;e--;
        }
    }

    return matrix;
}
