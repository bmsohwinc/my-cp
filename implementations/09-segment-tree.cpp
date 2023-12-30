#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define ff first
#define ss second


int get_mid(int l, int r) {
    return l + (r - l) / 2;
}


void update(int *segtree, int l, int r, int qi, int qv, int idx) {
    if (qi < l or qi > r) {
        return;
    }

    segtree[idx] += qv;

    if (l != r) {
        int mid = get_mid(l, r);
        update(segtree, l, mid, qi, qv, 2 * idx + 1);
        update(segtree, mid + 1, r, qi, qv, 2 * idx + 2);
    }
}


int query(int *segtree, int l, int r, int ql, int qr, int idx) {
    if (l >= ql and r <= qr) {
        return segtree[idx];
    }

    if (l > qr or r < ql) {
        return 0;
    }

    int mid = get_mid(l, r);
    return query(segtree, l, mid, ql, qr, 2 * idx + 1) 
        + query(segtree, mid + 1, r, ql, qr, 2 * idx + 2);
}


void solve() {
    int n, q;
    cin >> n >> q;

    int arr[n];
    int segtree[4*n + 1] = {0};
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        update(segtree, 0, n - 1, i, arr[i], 0);
    }

    int a, b, c, s1, s2;
    while (q--)
    {
        cin >> a;
        switch (a)
        {
        case 1:
            cin >> b >> c;
            cout << query(segtree, 0, n - 1, b, c, 0) << "\n";
            break;
        
        case 2:
            cin >> b >> c;
            update(segtree, 0, n - 1, b, c, 0);
            break;
        
        // case 3:
        //     cin >> b >> c;
        //     s1 = sum(bit, n, b);
        //     s2 = sum(bit, b, c);
        //     cout << (s2 - s1 + arr[b]) << "\n";
        //     break;

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
