class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(2 * nums.size(), 0);
        copy(nums.begin(), nums.end(), ans.begin());
        copy(nums.begin(), nums.end(), ans.begin() + nums.size());
        return ans;
    }
};