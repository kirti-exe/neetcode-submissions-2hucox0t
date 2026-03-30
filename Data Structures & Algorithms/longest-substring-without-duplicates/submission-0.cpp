class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int l = 0, r = 0;
        int maxLength = 0;
        while(r < s.length()){
            while(charSet.count(s[r])){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            maxLength = max(maxLength, r - l + 1);
            r++;
        }
        return maxLength;
    }
};
