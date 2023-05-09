#include "math_lib.h"
#include <iostream>
#include <vector>

int main()
{
    std::vector<double> data = {1.0, 2.0, 3.0, 3.0, 4.0, 5.0, 6.0, 7.0};
    std::vector<double> unsorted_data = {2.0, 12.0, 1.0, 3.0, 7.0, 15.0, 15.5, 2.5, 7.5, 6.0, 1.2};
    // Test mean
    // ...
    double mean = math_lib::mean(data);
    printf("Mean: %f\n", mean);
    // Test median
    // ...
    double median = math_lib::median(data);
    printf("Median: %f\n", median);

    // Test mode
    // ...
    std::vector<double> mode = math_lib::mode(data);
    for (auto i = mode.begin(); i != mode.end(); i++)
    {
        printf("Mode: %f\n", *i);
    }

    // Test quickSort
    // ...
    math_lib::quickSort(unsorted_data, 0, unsorted_data.size() - 1);
    printf("Quicksort: ");
    for (auto i : unsorted_data)
    {
        printf("%f ", i);
    }
    printf("\n");

    // Test binarySearch
    // ...
    int find = math_lib::binarySearch(unsorted_data, 7.5);
    printf("binary search found 7.5 at index %d\n", find);

    return 0;
}
