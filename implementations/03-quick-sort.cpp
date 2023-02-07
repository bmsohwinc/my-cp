#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define ll long long
#define ull unsigned long long

// FOR TIME
// high_resolution_clock::time_point t1 = high_resolution_clock::now();
// int ans = fibo(n);
// high_resolution_clock::time_point t2 = high_resolution_clock::now();

int partition(int *arr, int n, int l, int h) {
    int pvt = arr[h];
    int i = l - 1;
    for (int j = l; j < h; j++) {
        if (arr[j] <= pvt) {
            i++;
            int t = arr[j];
            arr[j] = arr[i];
            arr[i] = t;
        }
    }
    i++;
    int t = arr[i];
    arr[i] = pvt;
    arr[h] = t;
    return i;
}

void quicksort(int *arr, int n, int l, int h) {
    if (l < h) {
        int partidx = partition(arr, n, l, h);
        quicksort(arr, n, l, partidx - 1);
        quicksort(arr, n, partidx + 1, h);
    }
}

void solve() {
    int n;
    cin >> n;

    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, n, 0, n - 1);

    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";

}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        // printf("Case #%d: ", i);
        solve();
    }
    return 0;
}
