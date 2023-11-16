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
        arr[i] =(i+1)*(i+1);

        // Print value after assignment
        printf("After assignment, arr[%d]: %.2f\n", i, arr[i]);
    }

    // Calculate mean and variance using the function
    float result[2];
    calculateMeanAndVariance(arr, 100, result);

    // Open a binary file for writing
    FILE *file = fopen("result.bin", "wb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    // Write mean and variance to the binary file
    fwrite(result, sizeof(float), 2, file);

    // Close the file
    fclose(file);

    // Free the allocated memory
    free(arr);

    return 0;
}


