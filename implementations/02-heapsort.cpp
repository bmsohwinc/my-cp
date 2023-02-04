#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

#define ll long long
#define ull unsigned long long

// FOR TIME
// high_resolution_clock::time_point t1 = high_resolution_clock::now();
// int ans = fibo(n);
// high_resolution_clock::time_point t2 = high_resolution_clock::now();


void max_heapify(int *arr, int idx, int n) {
    int l = 2 * idx + 1;
    int r = 2 * idx  + 2;
    int new_idx = idx;

    if (l < n and arr[l] > arr[new_idx]) {
        new_idx = l;
    }

    if (r < n and arr[r] > arr[new_idx]) {
        new_idx = r;
    }

    if (new_idx != idx) {
        int t = arr[new_idx];
        arr[new_idx] = arr[idx];
        arr[idx] = t;

        max_heapify(arr, new_idx, n);
    }
}

void build_max_heap(int *arr, int n) {
    for (int i = n / 2; i >= 0; i--) {
        max_heapify(arr, i, n);
    }
}

void print_heap(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        int par = (i - 1) / 2;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        printf("parent = %2d\t", (i > 0 ? arr[par] : -1));

        printf("element = %2d\t", arr[i]);

        printf("left = %2d\t", (left < n ? arr[left] : -1));

        printf("right = %2d\t", (right < n ? arr[right] : -1));
        
        printf("\n");
    }
}

void heap_sort(int *arr, int n) {

    int heap_size = n;

    while(heap_size > 1) {
        int t = arr[heap_size - 1];
        arr[heap_size - 1] = arr[0];
        arr[0] = t;
        heap_size--;
        max_heapify(arr, 0, heap_size);
        
    }
    
}

void solve() {
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    build_max_heap(arr, n);

    print_heap(arr, n);

    heap_sort(arr, n);



    for (int i = 0; i < n; i++) {
        printf("%2d ", arr[i]);
    }
    printf("\n");
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
