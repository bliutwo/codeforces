#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve(char c) {
    cout << c << "\n";
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
    size_t ans{};
    char prev{};
    while (t--) {
        char c;
        cin >> c;
        if (c == prev) ans++;
        prev = c;
    }
    cout << ans << "\n";
    return 0;
}
