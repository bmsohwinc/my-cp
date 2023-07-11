class Solution {
public:
    // Sleeker code. O (N) time. O (1) Memory 
    int removeElement(vector<int>& nums, int val) {
        int k = 0, n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == val) {
                k++;
            } else {
                nums[i - k] = nums[i];
            }
        }
        return n - k;
    }
    
    // Good code. O (N) time. O (1) Memory
    int removeElement(vector<int>& nums, int val) {
        int vc = 0, j = nums.size() - 1, i = 0;
        while (j >= 0 and nums[j] == val) {
            vc++;
            j--;
        }
        while (i < j) {
            if (nums[i] == val) {
                swap(nums[i], nums[j]);
                while (j >= 0 and nums[j] == val) {
                    vc++;
                    j--;
                }
            }
            i++;
        }
        return nums.size() - vc;
    }
};
