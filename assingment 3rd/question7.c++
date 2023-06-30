#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> findMissingRanges(std::vector<int>& nums, int lower, int upper) {
    std::vector<std::string> result;
    int start = lower;

    for (int num : nums) {
        if (num > start) {
            result.push_back(getRange(start, num - 1));
            start = num + 1;
        }
    }

    if (start <= upper) {
        result.push_back(getRange(start, upper));
    }

    return result;
}

std::string getRange(int start, int end) {
    return (start == end) ? std::to_string(start) : std::to_string(start) + "->" + std::to_string(end);
}

int main() {
    std::vector<int> nums = {0, 1, 3, 50, 75};
    int lower = 0;
    int upper = 99;

    std::vector<std::string> result = findMissingRanges(nums, lower, upper);

    std::cout << "Missing Ranges:" << std::endl;
    for (const auto& range : result) {
        std::cout << range << std::endl;
    }

    return 0;
}
