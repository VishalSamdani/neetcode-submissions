class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;

        for(int i = 0; i <= n; i++)
        {
            string bin = bitset<32>(i).to_string();

            int cnt = 0;

            for(char c : bin)
            {
                if(c == '1')
                {
                    cnt++;
                }
            }

            ans.push_back(cnt);
        } 

        return ans;  
    }
};
