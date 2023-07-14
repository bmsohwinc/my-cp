class Solution {
public:
    // Okayish method
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if (k == 0) return;

        int g = __gcd(n, k);
        if (g > 1) {
            for (int i = 0; i < g; i++) {
                int prev = nums[i];
                int j = (i + k) % n;
                while (j != i) {
                    swap(prev, nums[j]);
                    j = (j + k) % n;
                }
                swap(prev, nums[j]);
            }
        } else {
            int i = 0;
            int prev = nums[i];
            int j = (i + k) % n;
            while (j != i) {
                swap(nums[j], prev);
                j = (j + k) % n;
            }
            swap(nums[j], prev);
        }
    }

    // Elegant method
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums.begin(), nums.begin() + (n - k));;
        reverse(nums.begin() + (n - k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};
