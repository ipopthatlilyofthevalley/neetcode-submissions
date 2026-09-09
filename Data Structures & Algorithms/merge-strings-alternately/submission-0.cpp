class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result {};
        result.reserve(word1.length() + word2.length());
        size_t p1 {}, p2 {};
        while (p1 < word1.length() && p2 < word2.length()) {
            result += word1[p1++];
            result += word2[p2++];
        }
        while (p1 < word1.length()) {
            result += word1[p1++];
        }
        while (p2 < word2.length()) {
            result += word2[p2++];
        }
        return result;
    }
};