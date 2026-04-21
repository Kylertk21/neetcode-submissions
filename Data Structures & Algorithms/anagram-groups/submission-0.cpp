/* Inputs: arr[string] 
 * Outputs: arr[string] sublist of anagrams for given word
 * string has to contain same chars as another string */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> oMap;
        for (const auto& s : strs) {
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            oMap[sorted].push_back(s);
        }

        vector<vector<string>> result;
        for (auto& pair : oMap) {
            result.push_back(pair.second);
        }
        return result;
    }
};