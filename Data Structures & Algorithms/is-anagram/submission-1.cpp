/* Given two strings s and t, return true if strings are anagrams of each other, return false if not */
/* Compare two strings, if same number of characters in each, then they are anagrams                 */
/* naive approach: iterate through both strings, comparing each value                                */
/* sort strings by value                                                                             */
/* compare if s == t                                                                                 */


class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> charMap_s = {};
        unordered_map<char, int> charMap_t = {};

        for (int i = 0; i < s.size(); i++) {
            charMap_s[s.at(i)]++;
            charMap_t[t.at(i)]++;
        }

        if (charMap_s == charMap_t) return true;
        else return false;
        
    }
};
