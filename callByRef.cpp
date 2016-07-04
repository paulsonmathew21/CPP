#include<iostream>
using namespace std;
void swaping(int &, int &);
int main()
{
    int a=100,b=25;
    cout<<"This is before swapping : "<<a<<b<<endl;
    swaping(a,b);
    cout<<"This is after swapping : "<<a<<b<<endl;
    return 0;
}
void swaping(int &c,int &d)
{
    int temp = c;
    c=d;
    d=temp;
    return;
}
