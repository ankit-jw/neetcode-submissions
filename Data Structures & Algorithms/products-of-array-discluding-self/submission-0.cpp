class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>product(n, 1);
        int temp = 1;
        for(int i = 1; i < n; i++){
            temp *= nums[i-1];
            product[i] = temp;
        }
        // 1 1 2 8
        // 48 24 6 1 
        temp = 1;
        for(int i = n-2; i >= 0; i--){
            temp *= nums[i+1];
            product[i] *= temp;
        }
        return product;
    }
};
