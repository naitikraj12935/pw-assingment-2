#include <iostream>
#include <vector>
#include <algorithm>

void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

   
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        --i;
    }

    if (i >= 0) {
       
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            --j;
        }

        std::swap(nums[i], nums[j]);
    }

   
    std::reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    nextPermutation(nums);

    std::cout << "Next permutation: ";
    for (int num : nums) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
