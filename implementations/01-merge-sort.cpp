/**
 * @file 01-merge-sort.cpp
 * @author Sourabha (bms)
 * @brief 
 * @version 0.1
 * @date 2023-01-10
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long

void merge(int *arr, int size, int l, int m, int h) {
    int n1 = m - l + 1;
    int n2 = h - m;
    int left[n1] = {0};
    int right[n2] = {0};
    for (int i = l; i <= m; i++) {
        left[i - l] = arr[i];
    }
    for (int i = m + 1; i <= h; i++) {
        right[i - (m + 1)] = arr[i];
    }

    int si = l;
    int i = 0;
    int j = 0;

    while(i < n1 and j < n2) {
        if (left[i] <= right[j]) {
            arr[si] = left[i];
            i++;
        } else {
            arr[si] = right[j];
            j++;
        }
        si++;
    }

    while(i < n1) {
        arr[si] = left[i];
        si++;
        i++;
    }

    while(j < n2) {
        arr[si] = right[j];
        si++;
        j++;
    }
}

void merge_sort(int *arr, int size, int l, int h) {
    if (l >= h) return;

    int m = l + (h - l) / 2;
    // printf("Merg sorting l = %d, m = %d, h = %d\n", l, m, h);
    merge_sort(arr, size, l, m);
    merge_sort(arr, size, m + 1, h);
    merge(arr, size, l, m, h);
}

void solve() {
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    merge_sort(arr, n, 0, n - 1);

    cout << "Sorted array: ";
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}