// Pointer
#include <iostream>
using namespace std;

int main()
{

      // Pointer ot int is created and pointing to some garbage address

      // int *p = 0;
      // cout << *p << endl;

      int i = 5;

      //Two way to initialize 
      // use a ptr pointer address
      int *ptr = &i;
      cout << ptr << endl;
      cout << *ptr << endl;


      int *p = 0;
      p = &i;

      cout << p << endl;
      cout << *p << endl;

}
