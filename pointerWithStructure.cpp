#include<bits/stdc++.h>
using namespace std;
struct mystruct{
    int age;
    double height;
};
int main(){
    struct mystruct s1;
    s1.age=10;
    s1.height=4.9;
    cout<<s1.age<<endl;
    cout<<s1.height<<endl;
    struct mystruct *ps1;
    ps1=&s1;
    //(*ps1).age=21;
    ps1->age=21;
    //(*ps1).height=5.1;
    ps1->height=5.1;

    cout<<s1.age<<endl;
    cout<<s1.height<<endl;

}
