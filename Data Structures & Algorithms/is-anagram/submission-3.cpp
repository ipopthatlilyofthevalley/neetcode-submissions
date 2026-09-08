class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) { return false; }
        array<int, 26> sContT {};
        for (const char c : s) {
            sContT[c - 'a']++;
        }
        for (const char c : t) {
            if (--sContT[c - 'a'] < 0) { return false; }
        }
        return true;
    }
};
