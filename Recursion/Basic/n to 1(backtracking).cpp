#include<bits/stdc++.h>
using namespace std;

int c = 0;
void print(int i,int n){

    if(i>n)
        return ;

    print(i+1,n);
    cout<<i<<endl;

}

int main(){

    print(1,5);
    return 0;
}
