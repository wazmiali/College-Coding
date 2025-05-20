#include <iostream>
#include <climits>
using namespace std;

bool isPresent(int arr[][3], int target, int i, int j)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
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

int largestRowSum(int arr[][3], int i, int j)
{
    int maxi = INT_MIN;
    int iIndex = -1;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }

        if (sum > maxi)
        {
            maxi = sum;
            iIndex = i;
        }
    }

    cout << "The maximum sum is: " << maxi << endl;
    return iIndex;
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

    int ansIndex = largestRowSum(arr, 3, 3);
    cout << "Max row is at index " << ansIndex << endl;

    return 0;
}
