#include <iostream>

using namespace std;
const int MAX = 4;

int main ()
{
   char *names[MAX] = {
                   "Paulson",
                   "mathew",
                   "paul",
                   "pauls",
   };
   for (int i = 0; i < MAX; i++)
   {
      cout << "Value of names[" << i << "] = ";
      cout << names[i] << endl;
   }
   return 0;
}
