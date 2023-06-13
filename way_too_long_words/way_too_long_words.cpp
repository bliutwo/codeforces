#include <bits/stdc++.h>
using namespace std;

#define ll long long;

void solve(string s) {
    if (s.length() <= 10) {
        cout << s << "\n";
        return;
    }
    cout << s[0] << s.length() - 2 << s[s.length() - 1] << "\n";
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
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
