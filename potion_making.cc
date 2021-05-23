#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
int getGCF(int a, int b) {
    if (b == 0) return a;
    return getGCF(b, a % b);
}

void solve(int n) {
    int d = 100;
    int gcf = getGCF(d, n);
    cout << d / gcf << "\n";
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
