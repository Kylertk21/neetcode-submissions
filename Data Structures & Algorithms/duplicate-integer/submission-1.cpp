/* Given array nums, return true if any value appears more than once, otherwise return false */
/* Iterate through array once, storing each value in a hash map                              */
/* Compare hashed values, if matching, return true, else return false                        */
/* hashmap numsmap = int:int                                                                 */
/* for int size in nums: numsmap i:nums[i]                                                   */
/* if duplicate in numsmap: return true, else return false                                   */

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
     unordered_map<int, int> numsMap = {};
     for (int i = 0; i < nums.size(); i++) {
        if (numsMap.count(nums[i])) return true;
        else numsMap.insert({nums[i], i});
     }
    return false;
    }
};