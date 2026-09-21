#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;  // value → index

        for (int i = 0; i < static_cast<int>(nums.size()); ++i) {
            int need = target - nums[i];
            if (auto it = seen.find(need); it != seen.end()) {
                return { it->second, i };
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};