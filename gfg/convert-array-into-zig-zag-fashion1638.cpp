class Solution {
  public:

    // Time: O (N)
    void zigZag(int arr[], int n) {
        for (int i = 0; i + 1 < n; i++) {
            if (i % 2 == 0 and arr[i + 1] < arr[i]) {
                swap(arr[i], arr[i + 1]);
            }
            
            if (i % 2 == 1 and arr[i + 1] > arr[i]) {
                swap(arr[i], arr[i + 1]);
            }
        }
    }

    // Program for zig-zag conversion of array
    // Time: O (N log N)
    void zigZag(int arr[], int n) {
        sort(arr, arr + n);
        for (int i = 1; i + 1 < n; i+= 2) {
            swap(arr[i], arr[i + 1]);
        }
    }
};
