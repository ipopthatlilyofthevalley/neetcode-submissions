class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq {};
        for (const int& n : nums) { freq[n]++; }
        
        vector<pair<int, int>> pairs(freq.begin(), freq.end());
        
        nth_element(pairs.begin(), pairs.begin() + k, pairs.end(),
                    [](const auto& a, const auto& b) {
                        return a.second > b.second;
                    });
        
        vector<int> result {};
        result.reserve(k);
        for (int i {}; i < k; i++) {
            result.push_back(pairs[i].first);
        }
        
        return result;
    }
};