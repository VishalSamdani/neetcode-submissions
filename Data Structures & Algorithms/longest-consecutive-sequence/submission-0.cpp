class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if(n == 0) return 0;

        int cnt = 1;
        int longest = 1;

        set<int> st;

        for(int i = 0; i < n; i++)
        {
            st.insert(nums[i]);
        }

        vector<int> ans(st.begin(),st.end());

        for(int i = 1; i < ans.size(); i++)
        {
            if(ans[i] == ans[i-1] + 1)
            {
                cnt++;
            }

            else
            {
                longest = max(longest,cnt);
                cnt = 1;
            }
        }

        longest = max(longest,cnt);

        return longest;
        
    }
};
