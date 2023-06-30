
#include <iostream>
#include <vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    int n = digits.size();
    int carry = 1;  
   
    for (int i = n - 1; i >= 0; --i) {
        int sum = digits[i] + carry;
        digits[i] = sum % 10;  
        carry = sum / 10;      

      
        if (carry == 0) {
            break;
        }
    }

   
    if (carry > 0) {
        digits.insert(digits.begin(), carry);
    }

    return digits;



}

int main() {
    std::vector<int> digits = {1, 2, 3};
    std::vector<int> result = plusOne(digits);

    std::cout << "Result: ";
    for (int digit : result) {
        std::cout << digit << " ";
    }
    std::cout << std::endl;

    return 0;
}
