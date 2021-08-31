#include <bits/stdc++.h>
using namespace std;

void solve(long long l, long long r) {
    long long maximumAns = INT_MIN;
    long long maxA = INT_MIN;
    long long maxB = INT_MIN;
    cout << l << " " << r << "\n";
    cout << maximumAns << " ";
    cout << maxA << " ";
    cout << maxB << "\n";
    for (long long i = 0; i < l; i++) {
        for (long long j = 0; j < r; j++) {
            cout << i << " " << j << "\n";
            long long ans = i % j;
            // if (isinf(ans)) {
            //     continue;
            // }
            // if (ans > maximumAns) {
            //     maximumAns = ans;
            // }
        }
    }
    // cout << "maxA: " << maxA << "\n";
    // cout << "maxB: " << maxB << "\n";
    // cout << maximumAns << "\n";
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    long long t;
    cin >> t;
    while (t--) {
        long long l, r;
        cin >> l >> r;
        solve(l, r);
    }
    return 0;
}
