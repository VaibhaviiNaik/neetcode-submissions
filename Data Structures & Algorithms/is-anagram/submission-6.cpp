class Solution {
   public:
    bool isAnagram(string s, string l) {
        if (s.length() != l.length()) {
            return false;
        }
        vector<int> count(26, 0);
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[l[i] - 'a']--;
        }
        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};