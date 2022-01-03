/*
Problem: https://leetcode.com/problems/best-time-to-buy-and-sell-stock
Time: 10
Idea: {
  This was simple. But it was the idea.
  I was about to think of the 2 loop thing where we find a max num and min num behind it.
  But I came up with this approach of ONE-PASS by simply maintaining the maxnum so far and
  max profit so far. Cool.
}
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, maxnum = prices[prices.size() - 1];
        for (int j = prices.size() - 2; j >= 0; j--) {
            if (prices[j] > maxnum) {
                maxnum = prices[j];
            } else if (prices[j] < maxnum) {
                profit = max(profit, maxnum - prices[j]);
            }
        }
        return profit;
    }
};
