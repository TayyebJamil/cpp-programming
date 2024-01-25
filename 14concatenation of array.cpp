#include <iostream>
#include <vector>

std::vector<int> concatenate(const std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> ans(2 * n);
    for (int i = 0; i < n; i++) {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
}

int main() {
    std::vector<int> nums = {1, 2, 3};
    std::vector<int> ans = concatenate(nums);
    for (int num : ans) {
        std::cout << num << " ";
    }
    return 0;
}

