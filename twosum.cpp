class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> numMap; // Stores number and its index
            
            for (int i = 0; i < nums.size(); i++) {
                int complement = target - nums[i];
                
                if (numMap.find(complement) != numMap.end()) {
                    return {numMap[complement], i}; // Return indices
                }
                
                numMap[nums[i]] = i; // Store the index of the current number
            }
            
            return {}; // Should never reach here due to problem constraints
        }
    };