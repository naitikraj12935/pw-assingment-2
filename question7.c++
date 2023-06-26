#include <iostream>
#include <vector>

bool isMonotonic(const std::vector<int>& nums) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] > nums[i - 1]) {
            decreasing = false;
        } else if (nums[i] < nums[i - 1]) {
            increasing = false;
        }
    }

    return increasing || decreasing;
}

int main() {
    std::vector<int> nums1 = {1, 2, 3, 4, 5};
    std::cout << "Is nums1 monotonic? " << std::boolalpha << isMonotonic(nums1) << std::endl;

    std::vector<int> nums2 = {5, 4, 3, 2, 1};
    std::cout << "Is nums2 monotonic? " << std::boolalpha << isMonotonic(nums2) << std::endl;

    std::vector<int> nums3 = {1, 2, 4, 3, 5};
    std::cout << "Is nums3 monotonic? " << std::boolalpha << isMonotonic(nums3) << std::endl;

    return 0;
}
