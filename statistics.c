#include "statistics.h"

void calculateMeanAndVariance(float *arr, int length, float *result) {
    float mean = 0.0, variance = 0.0;

    // Calculate mean
    for (int i = 0; i < length; ++i) {
        mean += arr[i];
    }
    mean /= length;

    // Calculate variance
    for (int i = 0; i < length; ++i) {
        variance += (arr[i] - mean) * (arr[i] - mean);
    }
    variance /= length;

    // Set the result array
    result[0] = mean;
    result[1] = variance;
}
