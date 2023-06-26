#include <vector>
#include <algorithm>
#include <iostream>
#include <vector>

int arrayPairSum(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());  // Sort the vector in ascending order
    int pair_sum = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        pair_sum += nums[i];
    }
    return pair_sum;
}
int main() {
    std::vector<int> nums = {1, 4, 3, 2};
    int max_sum = arrayPairSum(nums);
    std::cout << max_sum << std::endl;
    return 0;
}