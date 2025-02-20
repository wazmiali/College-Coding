#include <stdio.h>
#include <stdint.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int *A, int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot && i <= high)
        {
            i++;
        }

        while (A[j] > pivot && j >= low)
        {
            j--;
        }

        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);

    // Swap A[low] with A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quickSort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        partitionIndex = partition(A, low, high);

        // Print the array after each partition
        printf("Array after partitioning with pivot %d:\n", A[partitionIndex]);
        printArray(A, high + 1);

        quickSort(A, low, partitionIndex - 1);
        quickSort(A, partitionIndex + 1, high);
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12, 13, 11, 23, 1, 4};
    int n = 10;
    printf("Original array:\n");
    printArray(A, n);

    quickSort(A, 0, n - 1);

    printf("Sorted array:\n");
    printArray(A, n);

    return 0;
}
