#include<iostream>
using namespace std;
int maxim(int ,int);
int main()
{
    int a=10;
    int b=20;
    int ret;
    ret = maxim(a,b);
    cout<<"Maximum of a and b is :"<<ret<<endl;
    return 0;
}
int maxim(int num1, int num2)
{
    return(max(num1,num2));
}
