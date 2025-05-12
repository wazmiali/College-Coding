#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

      vector<int> v;

      v.push_back(1);
      v.push_back(3);
      v.push_back(6);
      v.push_back(7);

      cout << "Finding 6 element are present are not: " << binary_search(v.begin(), v.end(), 6) << endl;

      cout << "lower bond-> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

      cout << "upper bond-> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

      int a = 3, b = 5;

      cout << "max-> " << max(a, b);
      cout << "min-> " << min(a, b);

      swap(a, b);
      cout << "a-> " << a << endl;

      string Wazmi = "Wazmi";
      reverse(Wazmi.begin(), Wazmi.end());
      cout << "String-> " << Wazmi << endl;

      rotate(v.begin(), v.begin() + 1, v.end());
      cout << "After rotate " << endl;

      for (int i : v)
      {
            cout << i << endl;
      }
}