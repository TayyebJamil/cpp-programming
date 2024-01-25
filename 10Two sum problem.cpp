#include <iostream>
#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end()) {
            return { numMap[complement], i };
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main() {
    std::vector<int> nums = { 2, 10, 7, 15 };
    int target = 9;
    std::vector<int> result = twoSum(nums, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}
