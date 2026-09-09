class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        auto n { nums.size() };
        unordered_map<int, int> numMap {};
        for (const int num : nums) {
            numMap[num]++;
        }
        unordered_set<int> resTemp {};
        for (const int num : nums) {
            if (numMap[num] > static_cast<int>(n / 3)) {
                resTemp.insert(num);
            }
        }
        vector<int> result { resTemp.begin(), resTemp.end() };
        return result;
    }
};