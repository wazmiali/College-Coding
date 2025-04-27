#include <iostream>
#include <math.h>
using namespace std;

void printArray(int arr[], int size)
{

      cout << " printing the array " << endl;
      for (int i = 0; i <= size; i++)
      {
            cout << arr[i] << " ";
      }
      cout << " printing done " << endl;
}
int main()
{

      int number[15];
      cout << "Value 14: " << number[14] << endl;

      int second[3] = {5, 7, 11};

      cout << "Value at 2 index" << second[2] << endl;

      int third[15] = {2, 7};

      int n = 15;
      printArray(third, 15);

      int fourth[10] = {0};
      n = 10;
      printArray(fourth, 10);


}