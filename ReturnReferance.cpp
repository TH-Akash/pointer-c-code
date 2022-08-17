#include<bits/stdc++.h>
using namespace std;
int* getValue(){
    int x;
    x=10;
    return &x;
}
int main(){
    int* px=getValue();
    cout<<*px<<endl;
    int y;
    y=100;
    cout<<*px<<endl;
    return 0;
}

