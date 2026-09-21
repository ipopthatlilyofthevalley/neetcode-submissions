class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) { return false; }
        unordered_map<char, int> seen {};
        seen.reserve(s.length());

        for (char c : s) { seen[c]++; }

        for (char c : t) {
            if (--seen[c] < 0) {
                return false;
            }
        }
        return true;
    }
};
