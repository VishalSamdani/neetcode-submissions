class Solution {
public:

    void func(int ind, int target, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        // Base Case:
        if(ind == arr.size())
        {
            if(target == 0)
            {
                ans.push_back(ds);
            }

            return;
        }

        // Pick Condition

        if(arr[ind] <= target)
        {
            ds.push_back(arr[ind]);
            func(ind,target-arr[ind],arr,ds,ans);
            ds.pop_back();
        }

        // Not-Pick Condition

        func(ind+1,target,arr,ds,ans);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        func(0,target,nums,ds,ans);

        return ans;

    }
};
