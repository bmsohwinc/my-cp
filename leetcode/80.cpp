class Solution {
public:
    // Nice solution. Try getting valid elements instead of invalid (duplicate) elements
    // Time O(N). Space O(1)
    int removeDuplicates(vector<int>& nums) {
        int k = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (k < 2 or nums[i] > nums[k - 2]) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
