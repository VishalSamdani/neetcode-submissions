class Solution {
public:
    int hammingWeight(uint32_t n) {
        string bin = bitset<32>(n).to_string();

        int cnt = 0;

        for(int i = 0; i < bin.size(); i++)
        {
            if(bin[i] == '1')
            {
                cnt++;
            }
        }

        return cnt;
    }
};
