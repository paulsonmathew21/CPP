#include<iostream>
#include "externTest1.cpp"
using namespace std;
extern int  c;
int main()
{
    cout<<"Count :"<<c<<endl;
    c=1;
    inc();
    cout<<"count :"<<c<<endl;
    return 0;


}
