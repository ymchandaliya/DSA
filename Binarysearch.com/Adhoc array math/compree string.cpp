string solve(string s) {
    string s1 = "";
    int n = s.size();

    s1 = s1 + s[0];
    int k = 0;
    for(int i=0;i<n;i++){
        if(s1[k]!=s[i])
        {
            s1 = s1+s[i];
            k++;
        }
    }

    return s1;
    
}
