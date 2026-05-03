class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        int target = 1; 
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] <= 0) continue;
            if (nums[i] == target) {
                target++; 
            } 
            else if (nums[i] > target) {
                return target;
            }
        }
        return target;
    }
};