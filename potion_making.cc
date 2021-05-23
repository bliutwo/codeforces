#include <bits/stdc++.h>
using namespace std;

int getGCF(int a, int b) {
    return 1;
}

void solve(int n) {
    int d = 100;
    if (d % n == 0) {
        cout << d / n << "\n";
    }
    int gcf = getGCF(d, n);
    while (gcf > 1) {
        gcf = getGCF(d / gcf, n / gcf);
    }
    cout << d << "\n";
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
