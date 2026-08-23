class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for (string word : strs) {
            vector<int> count(26, 0);

            for (char ch : word) {
                count[ch - 'a']++;
            }

            string key;

            for (int value : count) {
                key += to_string(value) + "#";
            }

            groups[key].push_back(word);
        }

        vector<vector<string>> result;

        for (auto& entry : groups) {
            result.push_back(entry.second);
        }

        return result;
    }
};
