#include<iostream>
using namespace std;
int main()
{
    int var;
    int *ptr;
    int val;
    var=300;
    ptr = & var;
    val=*ptr;
    cout<<"value of var is "<<var<<endl;
    cout<<*ptr<<endl;
    cout<<"value of ptr is "<<ptr<<endl;
    cout<<"value of val is "<<val<<endl;
    return 0;
}
