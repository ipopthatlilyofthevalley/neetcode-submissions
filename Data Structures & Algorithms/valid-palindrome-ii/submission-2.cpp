class Solution {
public:
    bool validPalindrome(string s) {
        size_t l {};
        size_t r {s.length() - 1};
        while (l < r) {
            if (s[l] != s[r]) {
                return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
            }
            l++; r--;
        }
        return true;
    }
private:
    bool isPalindrome(const string& s, size_t l, size_t r) {
        while (l < r) {
            if (s[l] != s[r]) {
                return false;
            }
            l++; r--;
        }
        return true;
    }
};