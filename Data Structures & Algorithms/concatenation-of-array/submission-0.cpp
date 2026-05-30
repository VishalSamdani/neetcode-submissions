class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();

        int size = 2*n;

        vector<int>ans(size);

        for(int i = 0; i < size; i++)
        {
            ans[i] = nums[i%n];
        } 

        return ans;  
    }
};