#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve(int n) {
    // 10 - 5,5; 4,6
    // 11 - 5,6; 4,7
    // 12 - 6,6; 5,7; 4,8
    if (n == 2) {
        cout << "NO" << endl;
        return;
    }
    if (n % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int n;
    cin >> n;
    solve(n);
    return 0;
}
