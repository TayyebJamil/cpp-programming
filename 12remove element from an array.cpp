#include <iostream>
#include <vector>

int removeElement(std::vector<int>& nums, int val) {
    int index = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[index++] = nums[i];
        }
    }
    return index;
}

int main() {
    std::vector<int> nums;
    int n, val;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        std::cin >> num;
        nums.push_back(num);
    }
    std::cout << "Enter the value to remove: ";
    std::cin >> val;

    int remainingCount = removeElement(nums, val);
    std::cout << "Number of elements not equal to " << val << ": " << remainingCount << std::endl;
    std::cout << "Modified array with elements not equal to " << val << ": ";
    for (int i = 0; i < remainingCount; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

