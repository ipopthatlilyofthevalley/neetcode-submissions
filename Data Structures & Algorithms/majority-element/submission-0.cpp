class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto n { nums.size() };
        return static_cast<int>(nums[n/2]);
    }
};