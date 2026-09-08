class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto new_end = remove_if(nums.begin(), nums.end(), 
                                 [val](int x) { return x == val; });
        return new_end - nums.begin();
    }
};