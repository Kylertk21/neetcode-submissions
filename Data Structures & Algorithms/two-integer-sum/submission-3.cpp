/* input: nums[int] int target */
/* output: int i, int j such that nums[i] + nums[j] == target, smaller index first */
/* constraints: i != j, one pair of indices per input  that satisfy condition */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>hashNums;
        for (int i = 0; i < nums.size(); i++){
            hashNums[nums[i]] = i;
        }

        for (int j = 0; j < nums.size(); j++) {
            int complement = target - nums[j];
            if (hashNums.count(complement) && hashNums[complement] != j) {
                return {j, hashNums[complement]};
            }
        }

        return {0, 0};
        
    }
};

