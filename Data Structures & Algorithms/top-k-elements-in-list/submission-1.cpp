class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
       vector<vector<int>>buckets(nums.size()+1);
       for(auto it:mp){
        buckets[it.second].push_back(it.first);
       }

        vector<int> result;
        for(int i=buckets.size()-1;i>=0 && result.size() < k;i--){
            for(int val : buckets[i]) {
                result.push_back(val);
                if(result.size() == k) break;
            }
        }
        return result;
    }
};
