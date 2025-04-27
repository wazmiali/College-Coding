#include <iostream>
using namespace std;

int main()
{
      int n;
      cin >> n;

      int i = 1;

      while (i <= n)
      {
            int j = i;
            while (j <= i)
            {
                  cout << 1;
                  j = j + 1;
            }
            cout << endl;
            i = i + 1;
      }
}

// output
/*

1
22
333
4444
55555

*/