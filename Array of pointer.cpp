#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    int a[5]={10,20,30,40,50};
    int *ptr=&a[0];
    //int *ptr=a;
    cout<<" Value of a[0]="<<*ptr<<endl;
    cout<<" Address of a[0]="<<ptr<<endl;
   ptr= ptr+2;
    cout<< ptr<<endl;
    cout<<*ptr<<endl;

    ptr--;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
     ptr++;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
     ptr=ptr-2;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    int a=10;
    int *p= &a;
    int *t=p;
    int *ptr=NULL;
    cout<<*p<<endl;
    cout<<p<<endl;
    cout<<*t<<endl;
    cout<<t<<endl;
    cout<<*ptr<<endl;
    */
    // Address er bitore Address...
    int a=5;
    int *p=&a;
    int **t=&p;
    cout<<&a<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<**t<<endl;
    cout<<&t<<endl;


}

