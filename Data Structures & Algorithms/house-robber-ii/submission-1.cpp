class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 2) return max(nums[0], nums[1]);
        if(n==1) return nums[0];
        vector <int> money1(n-1,0);
        vector<int>money2(n-1,0);
        money1[0]=nums[0];
        money1[1]=max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++){
            money1[i]=max(money1[i-1],money1[i-2]+nums[i]);
        }
        money2[0]=nums[1];
        money2[1]=max(nums[1],nums[2]);
        for(int i=2;i<n-1;i++){
            money2[i]=max(money2[i-1],money2[i-2]+nums[i+1]);
        }
        return max(money1[n-2],money2[n-2]);
    }
};
