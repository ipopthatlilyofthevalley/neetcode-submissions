class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        auto& first { strs[0] };
        auto& last { strs.back() };
        size_t p1 {};
        size_t p2 {};
        string result {};
        while (p1 < first.length() && p2 < last.length()) {
            if (first[p1] == last[p2]) {
                result += first[p1];
                p1++; p2++;
            } else {
                break;
            }
        }
        return result;
    }
};