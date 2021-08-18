#include <bits/stdc++.h>
using namespace std;

void solve(vector<int>& v, int n){
    // look at each pair of elements
    int ans = INT_MIN;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int a = v[i];
            int b = v[j];
            int minimum = min(a, b);
            int maximum = max(a, b);
            int prod = minimum * maximum;
            if (prod > ans) {
                ans = prod;
            }
        }
    }
    cout << ans << endl;
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
        int n;
        cin >> n;
        vector<int> v(n, 0);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        solve(v, n);
    }
    return 0;
}
