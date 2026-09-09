class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove_if(s.begin(), s.end(), [](unsigned char c) {
            return !isalpha(c) && !isdigit(c);
        }), s.end());
        if (s.empty()) { return true; }

        size_t l {};
        size_t r { s.length() - 1 };
        while (l < r) {
            if (tolower(s[l]) != tolower(s[r])) {
                return false;
            }
            l++; r--;
        }
        return true;
    }
};
