// Maximum Subarray Sum – Kadane’s Algorithm
#include <iostream>
#include <vector>
using namespace std;

int MaxSubArraySum(vector<int> &arr)
{
      int res = arr[0];

      for (int i = 0; i < arr.size(); i++)
      {
            int currSum = 0;

            for (int j = i; j < arr.size(); j++)
            {
                  currSum = currSum + arr[j];

                  res = max(res, currSum);
            }
      }
      return res;
}

int main()
{
      vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
      cout << MaxSubArraySum(arr);
      return 0;
}
