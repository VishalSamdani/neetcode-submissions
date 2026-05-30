class Solution {
public:

    void func(int ind, int n, vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans)
    {
        // Base Case

        if(ind == n)
        {
            ans.push_back(ds);
            return;
        }

        // Pick Condition
        ds.push_back(arr[ind]);
        func(ind+1,n,arr,ds,ans);

        // Not-Pick Condition
        ds.pop_back();
        func(ind+1,n,arr,ds,ans);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n= nums.size();

        vector<vector<int>> ans;
        vector<int> ds;

        func(0,n,nums,ds,ans);

        return ans;    
    }
};
