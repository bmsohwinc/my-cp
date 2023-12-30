#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define ff first
#define ss second


void update(int *bit, int n, int idx, int v) {
    int i = idx + 1;
    while (i <= n) {
        bit[i] += v;
        i += (i & (-i));
    }   
}


int sum(int *bit, int n, int idx) {
    int i = idx + 1;
    int ans = 0;
    while (i > 0) {
        ans += bit[i];
        i -= (i & (-i));
    }
    return ans;
}


void solve() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    int bit[n + 1] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        update(bit, n, i, arr[i]);
    }

    int a, b, c, s1, s2;
    while (q--)
    {
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> b;
            cout << sum(bit, n, b) << "\n";
            break;
        
        case 2:
            cin >> b >> c;
            update(bit, n, b, c);
            break;
        
        case 3:
            cin >> b >> c;
            s1 = sum(bit, n, b);
            s2 = sum(bit, b, c);
            cout << (s2 - s1 + arr[b]) << "\n";
            break;

        default:
            printf("Invalid input\n");
            break;
        }
    }
    
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
