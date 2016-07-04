#include<iostream>
using namespace std;
int main()
{
    double bal[5]={100.32,2.0,34.4,22.2,15.0};
    double *ptr;
    ptr=bal;
    for(int i=0;i<5;i++)
    {
        cout<<*(ptr++)<<"\t"<<*(bal+i)<<endl;
    }
    return 0;
}
/* *p gives value at address of p
bal is a pointer to &bal[0]
*/
