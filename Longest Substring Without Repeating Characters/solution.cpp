class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        std::unordered_map<char, int> Map;
        int beginning = 0, maxlen = 0;
        for (int i = 0; beginning + maxlen < s.size(); ++i) {
            char c = s[i];
            if (Map.find(c) != Map.end()) beginning = max(beginning, Map[c] + 1);
            Map[c] = i;
            maxlen = max(maxlen, i - beginning + 1);
        }
        return maxlen;
    }
};