vector<vector<int>> solve(vector<vector<int>>& matrix) {
    
    int n = matrix.size();
    if(n==0)
        return matrix;
    int m = matrix[0].size();


    for(int i=0;i<n;i++){
        int b=0,e=m-1;
        while(b<e){
            int x = matrix[i][b];
            matrix[i][b] = matrix[i][e];
            matrix[i][e] = x;
            b++;e--;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0)
                matrix[i][j] = 1;
            else
                matrix[i][j] = 0;
        }
    }

    return matrix;
}
