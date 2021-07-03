#include <bits/stdc++.h>
using namespace std;

void solve(string s, int l, int r, map<char, int>& m) {
    int length{};
    for (int i = l; i < r; i++) {
        char c = s[i];
        length += m[c];
    }
    cout << length << "\n";
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> m;
    for (size_t i = 0; i < alphabet.length(); i++) {
        char c = alphabet[i];
        m[c] = i + 1;
    }
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        solve(s, l-1, r, m);
    }
    return 0;
}
