class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>>a;
        for(auto it:mp){
           a.push_back({it.first, it.second});
        }
       sort(a.begin(), a.end(), [](pair<int,int>& p1, pair<int,int>& p2) {
            return p1.second > p2.second; 
        });
        vector<int>result;
        for(int i=k-1;i>=0;i--){
            result.push_back(a[i].first);
        }
        return result;
    }
};
