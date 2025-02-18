// Bubble sort is a simple sorting algorithm. This sorting algorithm is comparison-based algorithm in which each pair of adjacent element is compared and the element are swapped if they are not in order.
#include <stdio.h>
#include <stdlib.h>

void printArray(int *A, int n)
{
      for (int i = 0; i < n; i++)
      {
            printf("%d ", A[i]);
      }

      printf("\n");
}

void bubbleSort(int *A, int n)
{
      int temp;
      int isSorted = 0;
      for (int i = 0; i < n - 1; i++)
      { // For number of pass


            printf("Working on pass number %d\n", i + 1);
            isSorted = 1; // Optimized way to ccheck if the array is already sorted or not

            for (int j = 0; j < n - 1 - i; j++)
            { // For comparison in each pass

                  if (A[j] > A[j + 1])
                  {
                        // Swapping the elements
                        temp = A[j];
                        A[j] = A[j + 1];
                        A[j + 1] = temp;
                        isSorted = 0;
                  }
            }

            if (isSorted){
                  return;
            }
      }
}

int main()
{
      int A[] = {12, 54, 65, 7, 23, 9};
      // int A[] = {1, 2, 3, 4, 5, 6};
      int n = 6;
      printArray(A, n); // Printing the array before sorting using bubble sort

      bubbleSort(A, n); // Function to sort the array using bubble sort
      printArray(A, n); // Print the array befor sorting using bubble sort
      return 0;
}