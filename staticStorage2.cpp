#include<iostream>
using namespace std;
void fun1()
{
    static int c=0;
    c++;
    cout<< "The value of c is  "<< c<<endl;
}
int main ()
{
    cout<<"Calling fun1"<<endl;
    fun1();
    cout<<"calling fun2"<<endl;
    fun1();
    return 0;

}
