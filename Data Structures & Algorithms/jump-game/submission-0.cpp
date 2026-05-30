class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int Max = 0;

        for(int i = 0; i < n; i++)
        {
            if(Max < i) return false;

            Max = max(Max,i + nums[i]);
        } 

        return true;   
    }
};
