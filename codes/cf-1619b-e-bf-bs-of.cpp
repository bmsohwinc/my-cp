/*
Problem: https://codeforces.com/problemset/problem/1619/B
Time: 30
Idea: {
    Lot of integer overflow and decimal precision issues were found.
    I replaced pow() function with a custom binary search based util method.
    But I faced integer overflow issues.
    I tried try-catch block to handle it, and other keep other checks.
    But they failed.
    Finally used a divisor method and was able to pass.
}
*/

#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ull unsigned long long
#define pii pair<int, int>

int mpow(int num, int root) {
    if (num == 1) return 1;

    int start = 1, end = num / root, ans;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int powered = 1;
        int f = 0;
        for (int i = 1; i <= root; i++) {
            int prev = powered;
            int pos_rem = INT_MAX / powered;
            if (mid > pos_rem) {
                end = mid - 1;
                f = 1;
                break;
            } else {
                powered *= mid;
            }
        }

        if (f) continue;

        if (powered == num) return mid;

        if (powered <= num) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }

    return ans; 
}

int solve() {
    int n;
    cin >> n;
    int n2, n3, n6;
    n2 = mpow(n, 2);
    n3 = mpow(n, 3);
    n6 = mpow(n, 6);

    cout << n2 + n3 - n6 << "\n";
    return 0;
}

int main() {
    
    int t = 1;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": " << solve() << "\n";
        solve();
    }

    return 0;
}
