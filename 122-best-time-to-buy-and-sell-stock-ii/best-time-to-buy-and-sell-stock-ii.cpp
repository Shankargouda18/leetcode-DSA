class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        // Loop through prices starting from the second day
        for (int i = 1; i < prices.size(); i++) {
            // If the price increased compared to yesterday, lock in the profit
            if (prices[i] > prices[i - 1]) {
                maxPro += prices[i] - prices[i - 1];
            }
        }
        
        return maxPro;
    }
};