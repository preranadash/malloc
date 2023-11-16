#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main() {
    // Create an array of hundred float elements
    float *arr = (float *)malloc(100 * sizeof(float));

    // Print and assign values to the elements of the array
    for (int i = 0; i < 100; ++i) {
        // Print value before assignment
        printf("Before assignment, arr[%d]: %.2f\n", i, arr[i]);

        // Assign values to the elements of the array
        arr[i] = 12 + i * 10;
    }

    // Calculate mean and variance using the function
    float result[2];
    calculateMeanAndVariance(arr, 100, result);

    // Print mean and variance to the terminal
    printf("\nMean: %.2f\n", result[0]);
    printf("Variance: %.2f\n", result[1]);

    // Free the allocated memory
    free(arr);

    return 0;
}
