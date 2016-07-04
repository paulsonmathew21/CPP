#include <iostream>
using namespace std;
void swap(int x, int y);
int main ()
{
    int a = 100;
    int b = 200;
    cout << "Before swap, value of a :" << a << endl;
    cout << "Before swap, value of b :" << b << endl;
    swap(a, b);
    cout << "After swap, value of a :" << a << endl;
    cout << "After swap, value of b :" << b << endl;
    return 0;
}
/* There will not be any changes happened to a and b, they are copied to formal arguments while used to call a function.
Any changes made inside the function persists only in the function and will not alter the original value_type. */
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    return;
}
