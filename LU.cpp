#include <iostream>
#include <vector>
#include <unordered_map>

int findMajorityElement(std::vector<int>& nums) {
    std::unordered_map<int, int> countMap;

    for (int num : nums) {
        countMap[num]++;
        if (countMap[num] > nums.size() / 2) {
            return num;
        }
    }

    return -1;
}

int main() {
    std::vector<int> nums = {2, 4, 5, 5, 5, 5, 5};

    int majorityElement = findMajorityElement(nums);

    std::cout << "Majority element: " << majorityElement << std::endl;

    return 0;
}