class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> strsAn {};
        
        for (const auto& str : strs) {
            string temp = str;
            sort(temp.begin(), temp.end());
            strsAn[temp].push_back(str);
        }
        
        vector<vector<string>> result;
        result.reserve(strsAn.size());
        
        transform(strsAn.begin(), strsAn.end(), back_inserter(result), 
                  [](auto& pair) { 
                      return move(pair.second); 
                  });
        
        return result;
    }
};