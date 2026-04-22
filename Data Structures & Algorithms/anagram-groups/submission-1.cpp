/* Inputs: arr[string] 
 * Outputs: arr[string] sublist of anagrams for given word
 * string has to contain same chars as another string */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> oMap;
        for (const auto &s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            oMap[key].push_back(s);
        }

        vector<vector<string>> result;
        for (const auto& pair : oMap) {
            result.push_back(pair.second);
        }

        return result;


        }   
};