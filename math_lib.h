#ifndef MATH_LIB_H
#define MATH_LIB_H

#include <vector>
#include <unordered_map>

namespace math_lib
{
    double mean(const std::vector<double> &data);
    double median(std::vector<double> &data);
    std::vector<double> mode(const std::vector<double> &data);
    double min(const std::vector<double> &data);
    double max(const std::vector<double> &data);
    void quickSort(std::vector<double> &data, int left, int right);
    double binarySearch(const std::vector<double> &data, double target);
} // namespace math_lib

#endif // MATH_LIB_H
