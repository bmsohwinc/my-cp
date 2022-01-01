/*
Problem: https://codeforces.com/contest/1616/problem/B
Time: 20
Idea: {
  I actually missed a corner case.
  Problem was straight-forward.
  Should have checked one case which I had overlooked.
}
*/

#include<bits/stdc++.h>

using namespace std;

string solve() {
    int n, i, x;
    string s, ans = "";
    cin >> n >> s;
    
    if (n == 1) {
        ans += s;
        ans += s;
        return ans;
    }
    
    if (s[0] == s[1]) {
        ans += s[0];
        ans += s[0];
        return ans;
    }
    
    ans += s[0];
    
    for (i = 1; i < n; i++) {
        if (s[i] <= s[i - 1]) {
            ans += s[i];
        } else {
            break;
        }
    }
    
    int temp_n = ans.size();
    
    for (i = temp_n - 1; i >= 0; i--) {
        ans += ans[i];
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
