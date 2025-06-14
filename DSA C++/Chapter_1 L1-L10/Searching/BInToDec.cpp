// Integer convert in a Binary number      

#include <iostream>
#include <math.h> // for using the pow() function
using namespace std;

int main()
{
      int n; // Variable to store the binary number input
      cin >> n; // Read the binary number as an integer (e.g., 1011)

      int i = 0;     // Position index for the binary digit
      int ans = 0;   // Variable to store the final decimal result

      // Loop runs until all digits are processed
      while (n != 0)
      {
            int digit = n % 10; // Get the last digit (rightmost binary digit)
            if (digit == 1)
            {
                  ans = ans + pow(2, i); // Add 2^i to ans if the digit is 1
            }
            n = n / 10; // Remove the last digit
            i++; // Move to the next position
      }

      cout << ans << endl; // Print the decimal equivalent
}
