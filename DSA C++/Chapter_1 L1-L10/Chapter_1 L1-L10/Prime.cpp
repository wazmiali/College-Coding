#include <iostream>
using namespace std;

int main()
{

      int n;
      cout << "Enter value: "<<endl;
      cin >> n;

      bool isPrime = 1;

      for (int i = 2; i <n; i++)
      {

            if (n % i == 0)
            {
                  isPrime = 0;
                  break;
            }
      }

      if (isPrime == 0)
      {
            cout << "Not a Prime."<<endl;
      }
      else
      {
            cout << "Is a Prime."<<endl;
      }
}

//45 time