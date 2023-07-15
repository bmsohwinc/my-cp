class Solution {
public:
    // Time: O(N)
    int maxProfit(vector<int>& prices) {
        // This boosts performance w.r.t time
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int mxp = 0, cp = prices[0], n = prices.size();
        for (int i = 1; i < n; i++) {
            if (prices[i] > cp) {
                mxp = max(mxp, prices[i] - cp);
            } else {
                cp = prices[i];
            }
        }
        return mxp;
    }
};
