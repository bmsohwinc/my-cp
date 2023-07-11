class Solution {
  public:
    // Program for zig-zag conversion of array
    // Time: O (N log N)
    void zigZag(int arr[], int n) {
        sort(arr, arr + n);
        for (int i = 1; i + 1 < n; i+= 2) {
            swap(arr[i], arr[i + 1]);
        }
    }
};
