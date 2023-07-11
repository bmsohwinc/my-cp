class Solution {
public:
    // Most efficient way: O (N) Time. O (1) Memory
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i, j, k;
        i = m - 1;
        j = n - 1;
        k = m + n - 1;

        while (i >= 0 and j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
                k--;
            } else {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
        }

        if (j >= 0) {
            for (int z = j; z >= 0; z--) {
                nums1[k] = nums2[z];
                k--;
            }
        }
    }

    // Brute force: O (N logN) Time. O (1) Memory
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m;
        for (auto j : nums2) {
            nums1[i++] = j;
        }
        sort(nums1.begin(), nums1.end());
    }
};
