#include <vector>
#include <unordered_set>
#include <iostream>
#include <vector>

int maxCandies(std::vector<int>& candyType) {
    std::unordered_set<int> uniqueCandies;
    for (int candy : candyType) {
        uniqueCandies.insert(candy);
    }
    int maxTypes = std::min(uniqueCandies.size(), candyType.size() / 2);
    return maxTypes;
}
int main() {
    std::vector<int> candyType = {1, 1, 2, 2, 3, 3};
    int maxTypes = maxCandies(candyType);
    std::cout << maxTypes << std::endl;
    return 0;
}