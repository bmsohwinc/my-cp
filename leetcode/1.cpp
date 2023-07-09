class Solution {
public:
    // Using Hashmap (for unsorted input): O (N)
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        int n = nums.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int c = nums[i];
            int rem = target - c;
            if (ump[rem] != 0) {
                v.push_back(ump[rem] - 1);
                v.push_back(i);
                break;
            }
            ump[c] = i + 1;
        }
        return v;
    }

    // Brute-force (for unsorted input): O (N^2)
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        return v;
    }

    // Two-pointer (for sorted input): O (N)
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        int i = 0, j = n - 1;
        while (i < j) {
            int sum = nums[i] + nums[j];
            if (sum == target) {
                v.push_back(i);
                v.push_back(j);
                break;
            }
            if (sum < target) {
                i++;
            } else {
                j--;
            }
        }
        return v;
    }
};
