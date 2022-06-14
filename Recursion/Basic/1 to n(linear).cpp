#include<bits/stdc++.h>
using namespace std;

int c = 0;
void print(int n){

    if(c>=n)
        return ;
    c++;
    cout<<c<<endl;
    print(n);
}

int main(){

    print(10);
    return 0;
}
