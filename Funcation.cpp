#include<bits/stdc++.h>
using namespace std;
 void sum(int *ptr){
     for(int i=0;i<5;i++){
        *ptr=*ptr/10;
        ptr=ptr+1;
     }

 }
 int main(){
 int a[5]={20,30,40,50,60};
 sum(a);
 for(int i=0;i<5;i++)
    cout<<a[i]<<endl;
    cout<<&(a[1])<<endl;
    cout<<&(a)<<endl;
 }


