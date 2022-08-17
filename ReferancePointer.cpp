#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
void change(int *px){
    *px=30;
    cout<<*px<<endl;
}
int main(){
    int x=10;
    change(&x);
    cout<<x<<endl;
}
