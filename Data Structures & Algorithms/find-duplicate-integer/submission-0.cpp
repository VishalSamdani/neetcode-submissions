class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int,int> freq;

        for(int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        } 

        int ans;

        for(auto it : freq)
        {
            if(it.second > 1)
            {
                ans = it.first;
            }
        } 

        return ans;  
    }
};
