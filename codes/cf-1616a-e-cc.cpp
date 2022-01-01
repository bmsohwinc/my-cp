/*

Problem: https://codeforces.com/contest/1616/problem/A
Time: 10
Idea: {
  had to think of the use cases.
  initial analysis was the key.
  corner cases helped solve the problem.
}

*/

#include<bits/stdc++.h>

using namespace std;

int solve() {
    int n, i, x;
    cin >> n;
    unordered_map<int, int> mp;
    for (i = 0; i < n; i++) {
        cin >> x;
        mp[abs(x)]++;
    }
    
    int ans = 0;
    for (auto i : mp) {
        if (i.first == 0) {
            ans += 1;
        } else {
            ans += min(i.second, 2);
        }
    }
    
    return ans;
}

int main() {
    int t = 1;
    
    cin >> t;
    
    for (int tt = 1; tt <= t; tt++) {
        cout << solve() << "\n";
    }
    return 0;
}
