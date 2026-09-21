class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen {};

        for (int i {}; i < static_cast<int>(nums.size()); ++i) {
            int need = target - nums[i];
            if (auto it = seen.find(need); it != seen.end()) {
                return { it->second, i };
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};