#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int findLHS(std::vector<int>& nums) {
    std::unordered_map<int, int> freqMap;
    for (int num : nums) {
        freqMap[num]++;
    }
    
    int maxLen = 0;
    for (auto it = freqMap.begin(); it != freqMap.end(); ++it) {
        int num = it->first;
        int count = it->second;
        if (freqMap.count(num + 1) > 0) {
            maxLen = std::max(maxLen, count + freqMap[num + 1]);
        }
    }
    
    return maxLen;
}

int main() {
    std::vector<int> nums = {1, 3, 2, 2, 5, 2, 3, 7};
    int maxLen = findLHS(nums);
    std::cout << "Length of the longest harmonious subsequence: " << maxLen << std::endl;
    return 0;
}
