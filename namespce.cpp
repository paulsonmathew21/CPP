#include<iostream>
using namespace std;
namespace Nspace1
{
    void func()
    {
        cout<<"This is in first Namespace!"<<endl;
    }
}
namespace Nspace2
{
    void func()
    {
        cout<<"This is in second Namespace!"<<endl;
    }
}
using namespace Nspace2;

int main(void)
{
    func();
    return 0;
}
