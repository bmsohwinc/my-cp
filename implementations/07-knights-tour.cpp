#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define ff first
#define ss second

bool isvalid(int ni, int nj, int n) {
    return (ni >= 0 and ni < n and nj >= 0 and nj < n);
}


void btrack(int i, int j, int n, vector<vector<int>> &grid, int *move) {
    grid[i][j] = *move;

    int ni, nj;

    ni = i - 2;
    nj = j - 1;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i - 1;
    nj = j - 2;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i + 1;
    nj = j - 2;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i + 2;
    nj = j - 1;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i + 2;
    nj = j + 1;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i + 1;
    nj = j + 2;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i - 1;
    nj = j + 2;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }

    ni = i - 2;
    nj = j + 1;
    if (isvalid(ni, nj, n) and grid[ni][nj] == -1) {
        *move = *move + 1;
        btrack(ni, nj, n, grid, move);
    }
}


void solve() {
    int n;
    cin >> n;

    vector<vector<int>> grid;
    for (int i = 0; i < n; i++) {
        vector<int> v(n, -1);
        grid.push_back(v);
    }

    int move = 0;
    btrack(0, 0, n, grid, &move);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j  <n; j++) {
            printf("%2d ", grid[i][j]);
        }
        printf("\n");
    }
    printf("\n");
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
