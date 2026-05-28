class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 0); 
        int prod = 1;
        int zeroCount = 0;
        
        for(int i = 0; i < n; i++) {
            if(nums[i] != 0) {
                prod *= nums[i];
            } else {
                zeroCount++;
            }
        }
        
        for(int i = 0; i < n; i++) {
            if(zeroCount == 0) {
                output[i] = prod / nums[i];
            }
            else if(zeroCount == 1 && nums[i] == 0) {
                output[i] = prod;
            }
        }
        return output;
    }
};