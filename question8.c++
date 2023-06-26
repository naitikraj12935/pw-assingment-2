#include <iostream>
#include <vector>
#include <limits>

int minimumScore(std::vector<int>& nums, int k) {
    int minScore = std::numeric_limits<int>::max();
    int n = nums.size();
    
    for (int num : nums) {
        for (int x = -k; x <= k; x++) {
            int newNum = num + x;
            
            int maximum = num;
            int minimum = num;
            
            for (int i = 0; i < n; i++) {
                if (i != num) {
                    maximum = std::max(maximum, nums[i]);
                    minimum = std::min(minimum, nums[i]);
                }
            }
            
            int score = maximum - minimum;
            minScore = std::min(minScore, score);
        }
    }
    
    return minScore;
}

int main() {
    std::vector<int> nums = {1, 4, 7};
    int k = 3;
    
    int minScore = minimumScore(nums, k);
    std::cout << "Minimum score: " << minScore << std::endl;
    
    return 0;
}
