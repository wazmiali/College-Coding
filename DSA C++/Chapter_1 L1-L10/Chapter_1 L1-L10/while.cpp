#include <iostream>
using namespace std;

int main()
{
      // int n;
      // cout<<"Enter the number: ";

      // cin>>n;
      // int i= 1;
      // while (i<=n)
      // {
      //       cout<<i<<" ";
      //       i= i+1;
      // }


// sum of all numbers

      int n;
      cout<<"Enter the number: ";
      cin>>n;
      int i = 1;
      int sum = 0;
      while (i <= n)
      {
            sum = sum + i;
            i = i + 1;
      }

      cout<<"Value of sum is: "<<sum;

}