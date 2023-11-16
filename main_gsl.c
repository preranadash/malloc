#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_statistics.h>

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

    // Calculate mean and variance using GSL functions
    double gsl_mean = gsl_stats_mean(arr, 1, 100);
    double gsl_variance = gsl_stats_variance(arr, 1, 100);

    // Print mean and variance using GSL functions
    printf("\nGSL Mean: %.2f\n", gsl_mean);
    printf("GSL Variance: %.2f\n", gsl_variance);

    // Free the allocated memory
    free(arr);

    return 0;
}
