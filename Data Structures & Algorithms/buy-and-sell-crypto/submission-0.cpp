class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int best_buy_price = prices[0];
        for(int i = 1 ; i < prices.size(); ++i){

            // to start with
            int best_sell_price = prices[i];
            
            // now the profit, max of current profit and the profit for the current step
            profit = max(profit, best_sell_price - best_buy_price);

            // we also update the best buy price
            best_buy_price = min(best_buy_price, best_sell_price);
        }

        return profit;
    }
};
