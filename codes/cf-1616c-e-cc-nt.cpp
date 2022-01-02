/*
Problem: https://codeforces.com/contest/1616/problem/C
Time: 120
Idea: {
  Brilliant!
  This problem helps solve the precision issues with C++.
  With python, we get TLE due to multiple loops.
  But with C++, we suffer from precision issues.
  So, a corner case was missing out.
  To solve this, the solution used numerator-denominator approach.
  This clearly is innovative!!!!
}

*/

#include<bits/stdc++.h>
using namespace std;

int solve() {
    int i, j, k, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int minans = n - 1;
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            // To escape the double's precision catastrophe, we use a by-pass method
            int A = arr[j] - arr[i];
            int B = j - i;
            int C = B * arr[i] - i * A;
            
            int ans = 0;
            
            for (k = 0; k < n; k++) {
                int nnel = C + k * A;
                int dnel = B;
                
                if (nnel != dnel * arr[k]) {
                    ans++;
                }
            }
            
            minans = min(minans, ans);
        }
    }
    
    return minans;
}

int main() {
    int t = 1;
    cin >> t;
    
    while(t--) {
        cout << solve() << "\n";
    }
    return 0;
}

