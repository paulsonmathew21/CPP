#include<iostream>
using namespace std;
int sum(int c, int d=90)
{
    return (c+d);
}

int main()
{
    int a=100,b=200;
    int result;
    result=sum(a,b);
    cout<<"with two operators specified and not considered the default value"<<endl;
    cout<<"The sum is "<<result<<endl;
    result=sum(a);
    cout<<"The sum is "<<result<<endl;
    return 0;
}
