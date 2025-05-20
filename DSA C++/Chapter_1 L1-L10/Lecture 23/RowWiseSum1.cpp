// i -> is the Row
// j -> is the column
#include <iostream>
using namespace std;

bool isPresent(int arr[][3], int target, int i, int j)
{

      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  if (arr[i][j] == target)
                  {
                        return 1;
                  }
            }
      }
      return 0;
}

void printSum(int arr[][3], int i, int j)
{

      cout << "Printing Sum ->" << endl;
      for (int i = 0; i < 3; i++)
      {
            int sum = 0;
            for (int j = 0; j < 3; j++)
            {
                  sum += arr[i][j];
            }
            cout << sum << " ";
      }
      cout << endl;
}

int main()
{

      int arr[3][3];

      cout << "Enter the elements: ";
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cin >> arr[i][j];
            }
      }

      cout << "Printing the array" << endl;
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cout << arr[i][j] << " ";
            }
            cout << endl;
      }

      cout << "Enter the element to search " << endl;
      int target;
      cin >> target;

      if (isPresent(arr, target, 3, 3))
      {
            cout << "Element found " << endl;
      }
      else
      {
            cout << "Not found." << endl;
      }

      printSum(arr, 3, 3);

      return 0;
}