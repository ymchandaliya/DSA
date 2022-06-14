#include<bits/stdc++.h>
using namespace std;

int c = 0;

void print_5(string name){

    if(c==5)
        return ;

    cout<<c+1<<" "<<name<<endl;
    c++;
    print_5(name);
}

int main(){

    print_5("Yash");
    return 0;
}
