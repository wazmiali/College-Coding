#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
      int start = 0, end = n - 1;
      int ans = -1;
      int mid = start + (end - start) / 2;

      while (start <= end)
      {
            if (arr[mid] == key)
            {
                  ans = mid;
                  end = mid - 1;
            }
            else if (key < arr[mid])
            {
                  end = mid - 1;
            }
            else
            {
                  start = mid + 1;
            }
            mid = start + (end - start) / 2;
      }
      return ans;
}

int lastOcc(int arr[], int n, int key)
{
      int start = 0, end = n - 1;
      int ans = -1;
      int mid = start + (end - start) / 2;

      while (start <= end)
      {
            if (arr[mid] == key)
            {
                  ans = mid;
                  start = mid + 1;
            }
            else if (key < arr[mid])
            {
                  end = mid - 1;
            }
            else
            {
                  start = mid + 1;
            }
            mid = start + (end - start) / 2;
      }
      return ans;
}

int main()
{
      int even[5] = {1, 2, 3, 3, 5};

      cout << "First Occurrence of 3 is Index: " << firstOcc(even, 5, 3) << endl;

      cout << "Last Occurrence of 3 is Index: " << lastOcc(even, 5, 3) << endl;

      return 0;
}
