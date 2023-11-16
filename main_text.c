#include <stdio.h>
#include <stdlib.h>
#include "statistics.h"

int main() {
    // Create an array of hundred float elements using calloc
    float *arr = (float *)calloc(100, sizeof(float));

    // Print and assign values to the elements of the array
    for (int i = 0; i < 100; ++i) {
        // Print value before assignment
        printf("Before assignment, arr[%d]: %.2f\n", i, arr[i]);

        // Assign values to the elements of the array
        arr[i] = 12 + i * 10;

        // Print value after assignment
        printf("After assignment, arr[%d]: %.2f\n", i, arr[i]);
    }

    // Calculate mean and variance using the function
    float result[2];
    calculateMeanAndVariance(arr, 100, result);

    // Open a text file for writing
    FILE *file = fopen("result.txt", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    // Write mean and variance to the file
    fprintf(file, "Mean: %.2f\n", result[0]);
    fprintf(file, "Variance: %.2f\n", result[1]);

    // Close the file
    fclose(file);

    // Free the allocated memory
    free(arr);

    return 0;
}
