class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) { return ""; }

        sort(strs.begin(), strs.end());
        const string& first { strs[0] };
        const string& last { strs[strs.size() - 1] };

        size_t i {};
        while (i < first.length() && i < last.length() && first[i] == last[i]) {
            i++;
        }
        return strs[0].substr(0, i);
    }
};