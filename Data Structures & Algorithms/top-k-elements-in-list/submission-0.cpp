class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();

        unordered_map<int,int> freq;

        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        vector<pair<int,int>> val;

        for(auto it : freq)
        {
            val.push_back({it.second,it.first});
        }

        sort(val.begin(),val.end(),greater<pair<int,int>>());

        vector<int> ans;

        for(int i = 0; i < k; i++)
        {
            ans.push_back(val[i].second);
        }

        return ans;
    }
};
