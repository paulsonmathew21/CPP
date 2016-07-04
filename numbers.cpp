#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   s = 32767;
   i = 2147483647;
   l = 2147483647;
   f = 230.47;
   d = 30949.374;
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" <<setprecision(51)<< d << endl;

   return 0;
}
