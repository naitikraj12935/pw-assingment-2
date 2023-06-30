#include <vector>
#include <iostream>
#include <vector>

bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {
    int count = 0;
    for (int i = 0; i < flowerbed.size(); i++) {
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {
            flowerbed[i] = 1;
            count++;
        }
    }
    return count >= n;
}
int main() {
    std::vector<int> flowerbed = {1, 0, 0, 0, 1};
    int n = 1;
    bool canPlant = canPlaceFlowers(flowerbed, n);
    std::cout << std::boolalpha << canPlant << std::endl;
    return 0;
}