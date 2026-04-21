/* input: nums[int] int target */
/* output: int i, int j such that nums[i] + nums[j] == target, smaller index first */
/* constraints: i != j, one pair of indices per input  that satisfy condition */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {0, 0};
    }
};
