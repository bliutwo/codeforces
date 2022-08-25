#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve(int n, int k) {
    vector<vector<int>> ans;
    unordered_set<int> used;
    for (int a = 1; a <= n; a++) {
        for (int b = 1; b <= n; b++) {
            if (a == b) continue;
            if (used.find(a) != used.end() || used.find(b) != used.end()) continue;
            int total = (a + k) * b;
            if (total % 4 == 0) {
                vector<int> duet;
                duet.push_back(a);
                duet.push_back(b);
                // cout << a << " " << k << " " << b << " " << total << "\n";
                ans.push_back(duet);
                used.insert(a);
                used.insert(b);
            }
        }
    }
    // cout << "n:\t\t" << n << "\n";
    // cout << "ans.size():\t" << ans.size() << "\n";
    if (ans.size() == (n / 2)) {
        // print the vector
        cout << "YES\n";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i][0] << " " << ans[i][1] << "\n";
        }
    } else {
        cout << "NO\n";
    }
    // assert(false);
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        solve(n, k);
    }
    return 0;
}
