//Linear search to search the element 
#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{

      for (int i = 0; i < size; i++)
      {
            if (arr[i] == key)
            {
                  return true;
            }
      }
      return false;
}

int main()
{
// Array to insert data in linear search 
      int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

      cout << "Enter the element to search for:  ";
      int key;
      cin >> key;

      bool found = search(arr, 10, key);

      if (found)
      {
            cout << "Key is present" << endl;
            ;
      }
      else
      {
            cout << "Key is absent";
      }
}
