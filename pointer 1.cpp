#include<bits/stdc++.h>
using namespace std;
int main(){

    int a=10;
    int *ptr;
    ptr= &a;

    cout<<a<<endl;
    cout<<"Addres "<<ptr<<endl;
    cout<<&a<<endl;
    cout<<(*ptr)++<<endl;
    cout<<*(&a)<<endl;

}

