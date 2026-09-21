class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result {};
        result.reserve(2 * nums.size());
        copy(nums.begin(), nums.end(), back_inserter(result));
        copy(nums.begin(), nums.end(), back_inserter(result));
        return result;
    }
};