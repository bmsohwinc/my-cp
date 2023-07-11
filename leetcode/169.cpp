class Solution {
public:
    // Boyre-Moore Majority Voting algorithm
    // Time: O(N). Space: O(1)
    int majorityElement(vector<int>& nums) {
        int e = 0, ec = 0;
        for (auto i : nums) {
            if (ec == 0) {
                e = i;
                ec = 1;
            } else {
                if (i == e) {
                    ec++;
                } else {
                    ec--;
                }
            }
        }
        return e;
    }
};
