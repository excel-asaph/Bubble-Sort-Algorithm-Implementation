#include "bubblesort.h"
#include <stdio.h>
#include <time.h>

#define ARRAYSIZE 10

/**
 * @brief Main function for testing the bubble sort algorithm.
 *
 * This function prompts the user to enter numbers, stores them in an array,
 * performs bubble sort, and then prints the sorted array along with the
 * elapsed time.
 *
 * @return 0 on successful execution.
 */
int main(void)
{
    int arr[ARRAYSIZE];

    // Prompt user to enter numbers
    int count = 0;
    do
    {
        int n;
        printf("Enter a number: ");
        scanf("%d", &n);
        arr[count] = n;
        ++count;
    }
    while (count < ARRAYSIZE);

    // Measure the runtime of bubble sort
    clock_t start_time = clock();
    bubblesort(arr, ARRAYSIZE);
    clock_t end_time = clock();
    double elapsed_time = ((double) (end_time - start_time)) / CLOCKS_PER_SEC;

    // Print the sorted array
    printf("Sorted Array: ");
    for (int i = 0; i < ARRAYSIZE; i++)
    {
        printf("%i", arr[i]);
        if (i < ARRAYSIZE - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    // Print the elapsed time
    printf("Elapsed Time: %f seconds\n", elapsed_time);

    return 0;
}
