class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int>mpp;
        int diff;
        for(int i = 0; i < n; i++){
            diff = target - nums[i];
            if(mpp.find(diff) != mpp.end()) return {mpp[diff], i};
            mpp[nums[i]] = i;
        }
        return {};
    }
};
