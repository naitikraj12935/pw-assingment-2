#include <iostream>
#include <vector>
#include <algorithm>

int maximumProduct(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    
    int n = nums.size();
    int product1 = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int product2 = nums[0] * nums[1] * nums[n - 1];
    
    return std::max(product1, product2);
}

int main() {
    std::vector<int> nums = {1, 4, 3, 2};
    int maxProduct = maximumProduct(nums);
    std::cout << "Maximum product: " << maxProduct << std::endl;
    return 0;
}
