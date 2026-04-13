#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    std::cout << "Even numbers: ";
    std::for_each(nums.begin(), nums.end(), [](int n) {
        if (n % 2 == 0) std::cout << n << " ";
    });
    
    return 0;
}
