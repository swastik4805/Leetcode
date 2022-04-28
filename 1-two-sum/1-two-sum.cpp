class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> result(2);
        for(int i = 0; i < nums.size()-1; i++) {
            bool found = false;
            for(int j = i+1; j < nums.size(); j++) {
                if(nums[i]+nums[j] == target) {
                    result[0] = i;
                    result[1] = j;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        return result;
    }
};