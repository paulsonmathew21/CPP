#include <iostream>
using namespace std;

int main()
{
   int i, j;

   j = 10;
   i = (j++, j+100, 999+j);

   cout << i;

   return 0;
}
/*Here is the procedure how the value of i gets calculated: j starts with the value 10.
j is then incremented to 11. Next, j is added to 100. Finally, j (still containing 11)
is added to 999, which yields the result 1010.*/
