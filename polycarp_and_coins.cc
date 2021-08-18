#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
    int numCoins = n/3;
    int remaining = n%3;
    int c1;
    int c2;
    c1 = c2 = numCoins;
    if (remaining == 2) {
        c2++;
    } else if (remaining == 1) {
        c1++;
    }
    cout << c1 << " " << c2 << endl;
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
        solve(n);
    }
    return 0;
}
