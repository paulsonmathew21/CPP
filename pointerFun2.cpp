#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int * getRand()
{
    static int r[10];
    static int *q;
    q=r;
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++)
    {
        *(q)=rand();


        cout<<*q<<endl;
        q++;
    }
    return r;
}
int main()
{
    int *p ;
    p=getRand();
    cout<<"Here in Main()"<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<*p++<<endl;
    }
    return 0;
}
