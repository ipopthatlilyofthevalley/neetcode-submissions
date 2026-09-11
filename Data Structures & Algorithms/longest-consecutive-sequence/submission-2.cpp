class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet { nums.begin(), nums.end() };

        int maxSeq {};
        for (const int& num : nums) {
            if (!numSet.contains(num - 1)) {
                int curNum { num };
                int curStreak { 1 };
                while (numSet.contains(curNum + 1)) {
                    curNum++;
                    curStreak++;
                }
                maxSeq = max(maxSeq, curStreak);
            }
        }
        return maxSeq;
    }
};
