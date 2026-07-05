class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        int longest = 0;
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(st.find(nums[i] - 1) != st.end()) continue;
            int x = nums[i];
            int count = 1;
            while(st.find(x+1) != st.end()){
                count++;
                x = x+1;
            }
            longest = max(count, longest);
        }
        return longest;
    }
};
