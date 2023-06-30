#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> result;
    int n = nums.size();

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 3; ++i) {
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        for (int j = i + 1; j < n - 2; ++j) {
            if (j > i + 1 && nums[j] == nums[j - 1]) {
                continue;
            }

            int left = j + 1;
            int right = n - 1;

            while (left < right) {
                int currentSum = nums[i] + nums[j] + nums[left] + nums[right];

                if (currentSum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    ++left;
                    --right;

                    while (left < right && nums[left] == nums[left - 1]) {
                        ++left;
                    }

                    while (left < right && nums[right] == nums[right + 1]) {
                        --right;
                    }
                } else if (currentSum < target) {
                    ++left;
                } else {
                    --right;
                }
            }
        }
    }

    return result;
}

int main() {
    std::vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;
    std::vector<std::vector<int>> result = fourSum(nums, target);

    for (const auto& quadruplet : result) {
        std::cout << "[";
        for (int i = 0; i < quadruplet.size(); ++i) {
            std::cout << quadruplet[i];
            if (i < quadruplet.size() - 1) {
                std::cout << ",";
            }
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}
