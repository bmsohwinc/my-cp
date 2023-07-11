class Solution {
public:
    // Efficient. O (N) time. O (1) Space.
    // Similar to the remove element question: https://leetcode.com/problems/remove-element
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size(), k = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                k++;
            } else {
                nums[i - k] = nums[i];
            }
        }
        return n - k;
    }
};
