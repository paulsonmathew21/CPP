#include<iostream>
using namespace std;
main()
{
    int a = 6;
    int b;
    b=a++;
    cout<< "a++ : "<<b<<endl;
    cout<<a<<endl;
    b=++a;
    cout<< "++a : "<<b<<endl;
    return 0;
}
