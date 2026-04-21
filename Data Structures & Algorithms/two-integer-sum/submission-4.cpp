/* input: nums[int] int target */
/* output: int i, int j such that nums[i] + nums[j] == target, smaller index first */
/* constraints: i != j, one pair of indices per input  that satisfy condition */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashNums;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (hashNums.find(complement) != hashNums.end()) {
                return {hashNums[complement], i};
            } else {
                hashNums.insert({nums[i], i});
            }
        }
        return {0, 0};
    }
};

