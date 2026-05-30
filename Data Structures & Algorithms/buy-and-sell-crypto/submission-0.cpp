class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int Min = prices[0];
        int Max = 0;

        for(int i = 0; i < n; i++)
        {
            if(prices[i] < Min)
            {
                Min = prices[i];
            }

            int profit = prices[i] - Min;

            if(profit > Max)
            {
                Max = profit;
            }
        }

        return Max;   
    }
};
