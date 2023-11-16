#include <stdio.h>
#include <stdlib.h>

float* calculateMeanVariance(float* array, int length) {
    float mean = 0.0, variance = 0.0;

    // Calculate mean
    for (int i = 0; i < length; ++i) {
        mean += array[i];
    }
    mean /= length;

    // Calculate variance
    for (int i = 0; i < length; ++i) {
        variance += (array[i] - mean) * (array[i] - mean);
    }
    variance /= length;

    // Create and return result array
    float* result = (float*)malloc(2 * sizeof(float));
    result[0] = mean;
    result[1] = variance;

    return result;
}

int main() {
    // Create array of hundred float elements
    float* myArray = (float*)malloc(100 * sizeof(float));

    // Assign values to the elements of the array
    for (int i = 0; i < 100; ++i) {
        myArray[i] = (i+1)*(i+1);
    }

    // Calculate mean and variance using the function
    float* result = calculateMeanVariance(myArray, 100);

    // Print mean and variance
    printf("Mean: %.2f\nVariance: %.2f\n", result[0], result[1]);

    // Free allocated memory
    free(myArray);
    free(result);

    return 0;
}
