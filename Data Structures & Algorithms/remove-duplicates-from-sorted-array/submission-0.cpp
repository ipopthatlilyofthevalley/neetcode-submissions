class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        size_t slow {1};
        size_t fast {1};
        while (fast < nums.size()) {
            if (nums[fast] != nums[slow - 1]) {
                nums[slow] = nums[fast];
                slow++;
            }
            fast++;
        }
        return slow;
    }
};