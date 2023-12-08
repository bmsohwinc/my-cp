#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define ff first
#define ss second


class Job {
    public:
        char id;
        int deadline;
        int profit;

        Job(char x, int y, int z) {
            id = x;
            deadline = y;
            profit = z;
        }
};


bool compare(Job a, Job b) {
    return a.profit > b.profit;
}


class DisjointSet {
    public:
        int *parent;

        DisjointSet(int n) {
            parent = new int[n + 1];

            for (int i = 0; i <= n; i++) {
                parent[i] = i;
            }
        }

        int find(int u) {
            if (parent[u] == u) {
                return u;
            }

           return parent[u] = find(parent[u]);
        }

        void merge(int u, int v) {
            parent[v] = u;
        }
};


void solve() {
    int n;
    cin >> n;

    vector<Job> jobs;
    int mxd = 0;
    for (int i = 0; i < n; i++) {
        char x;
        int y, z;
        cin >> x >> y >> z; // deadline, profit
        Job j(x, y, z);
        jobs.pb(j);
        mxd = max(mxd, y);
    }

    sort(jobs.begin(), jobs.end(), compare);

    DisjointSet dj(mxd);

    for (int i = 0; i < n; i++) {
        Job j = jobs[i];

        int slots = dj.find(j.deadline);

        if (slots > 0) {
            cout << j.id << " ";
        }

        dj.merge(dj.find(slots - 1), slots);
    }

    cout << "\n";
}


int main() {
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++) {
        solve();
    }
    return 0;
}
