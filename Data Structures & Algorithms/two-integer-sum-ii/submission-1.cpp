class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        size_t left {};
        size_t right { numbers.size() - 1 };
        while (left < right) {
            auto sum { numbers[left] + numbers[right] };
            if (sum > target) {
                right--;
            } else if (sum == target) {
                return { static_cast<int>(left + 1), 
                         static_cast<int>(right + 1) };
            } else {
                left++;
            }
        }
        return {};
    }
};
