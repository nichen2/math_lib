#include "math_lib.h"

namespace math_lib
{
    double mean(const std::vector<double> &data)
    {
        // Implement mean
        double sum = 0.0;
        // Iterate through items in data where we calculate the sum
        for (double val : data)
        {
            sum += val;
        }
        double result = sum / data.size();
        return result;
    }

    double median(std::vector<double> &data)
    {
        // Implement median
        quickSort(data, 0, data.size());
        int middle = data.size() / 2;
        if (data.size() % 2 == 1)
            return data[middle];
        else
        {
            double num1 = data[middle];
            double num2 = data[middle + 1];
            return (num1 + num2) / 2;
        }
    }

    std::vector<double> mode(const std::vector<double> &data)
    {
        // Implement mode
        std::unordered_map<double, int> nums;
        std::vector<double> result;
        int most = 0;
        for (double val : data)
        {
            if (nums.find(val) != nums.end())
                nums[val]++;
            else
                nums[val] = 1;
            if (nums[val] > most)
                most = nums[val];
        }
        for (auto i = nums.begin(); i != nums.end(); i++)
        {
            if (i->second == most)
            {
                result.push_back(i->first);
            }
        }
        return result;
    }

    double min(const std::vector<double> &data)
    {
        // Implement min
        int min = data[0];
        for (int val : data)
        {
            if (val < min)
                min = val;
        }
        return min;
    }

    double max(const std::vector<double> &data)
    {
        // Implement max
        int max = data[0];
        for (int val : data)
        {
            if (val > max)
                max = val;
        }
        return max;
    }

    void quickSort(std::vector<double> &data, int left, int right)
    {
        // Implement quickSort
        if (left <= right)
        {
            int pivot = right;
            double pivot_val = data[pivot];
            int i = left;
            int j = right - 1;
            while (i < j)
            {
                while (i < j && data[i] < pivot_val)
                {
                    i++;
                }
                while (j > i && data[j] > pivot_val)
                {
                    j--;
                }
                if (i < j)
                {
                    std::swap(data[i], data[j]);
                }
            }
            std::swap(data[i], data[pivot]);
            quickSort(data, left, i - 1);
            quickSort(data, i + 1, right);
        }
    }

    double binarySearch(const std::vector<double> &data, double target)
    {
        // Implement binarySearch
        int low = 0;
        int high = data.size() - 1;
        while (low <= high)
        {
            double middle = low + (high - low) / 2;
            if (data[middle] == data[target])
                return middle;
            if (target < data[middle])
                high = middle - 1;
            else
                low = middle + 1;
        }
        return -1;
    }

} // namespace math_lib
