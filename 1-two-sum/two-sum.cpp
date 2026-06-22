
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> numToIndexMap;

        
        for (int i = 0; i < nums.size(); i++) {
        
            int diff = target - nums[i];

         
            if (numToIndexMap.find(diff) != numToIndexMap.end()) {
         
                return {i, numToIndexMap[diff]};
            }

         
            numToIndexMap[nums[i]] = i;
        }

        
        return {};
    }
};