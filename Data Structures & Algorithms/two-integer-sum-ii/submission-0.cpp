class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l {};
        int r { static_cast<int>(numbers.size()) - 1};
        while (l < r) {
            if (numbers[l] + numbers[r] > target) {
                r--;
            } else if (numbers[l] + numbers[r] == target) {
                return {l + 1, r + 1};
            } else {
                l++;
            }
        }
        return {};
    }
};
