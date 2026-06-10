class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        vector<int>ways(n+1,0);
        ways[0]=1;
        ways[1]=1;
        for(int i =2;i<n+1;i++){
            ways[i]=ways[i-1]+ways[i-2];
        }
        return ways[n];
    }
};
