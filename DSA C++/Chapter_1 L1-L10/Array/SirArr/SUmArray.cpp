#include <iostream>
using namespace std;

int main()
{
      int n;
      int sum = 0;
      cout << "ENter the size of array:" << endl;
      cin >> n;
      int arr[n];
      cout << "ENter the elements  of array:" << endl;
      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      cout << "element entered are :" << endl;

      for (size_t i = 0; i < n; i++)
      {
            cout << arr[i] << endl;
      }

      for (int i = 0; i < n; i++)
      {
            sum = sum + arr[i];
      }
      cout << "The sum of the elements of array is:" << sum << endl;

      return 0;
}