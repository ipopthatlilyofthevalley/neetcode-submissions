class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> seen { nums.begin(), nums.end() };
        for (int i {1}; i < numeric_limits<int>::max(); ++i) {
            if (!seen.contains(i)) {
                return i;
            }
        }
        return -1;
    }
};