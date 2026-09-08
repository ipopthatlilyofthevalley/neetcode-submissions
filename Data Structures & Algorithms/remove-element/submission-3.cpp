class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        size_t j {};
        for (size_t i {}; i < nums.size(); ++i) {
            if (nums[i] != val) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
};