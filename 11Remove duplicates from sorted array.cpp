#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int index = 0;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[index]) {
            nums[++index] = nums[i];
        }
    }

    return index + 1;
}

int main() {
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4,4,4,4,4};
    int uniqueCount = removeDuplicates(nums);
    std::cout << "Number of unique elements: " << uniqueCount << std::endl;
    for (int i = 0; i < uniqueCount; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}


