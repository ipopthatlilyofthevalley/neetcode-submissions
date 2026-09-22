class Solution {
public:
    int climbStairs(int n) {
        auto prev1 {1};
        auto prev2 {1};

        for (auto i {2}; i <= n; ++i) {
            auto curr { prev1 + prev2 };
            prev2 = prev1;
            prev1 = curr;
        }
        return prev1;
    }
};
