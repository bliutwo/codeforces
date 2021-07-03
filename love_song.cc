#include <bits/stdc++.h>
using namespace std;

int solve(string s, int l, int r, map<char, int>& m,
           map<string, int>& cache) {
    if (l == r - 2) {
        return m[s[l]];
    }
    string substring = s.substr(l, r);
    if (cache.find(substring) != cache.end()) {
        int lenIncrementLeft  = m[s[l]] + solve(s, l+1, r, m, cache);
        int lenDecrementRight = m[s[r]] + solve(s, l, r-1, m, cache);
        cache[substring] = m[s[l]] + lenIncrementLeft;
        if (l + 1 < r) {
            cache[substring.substr(l+1, r)] = lenIncrementLeft;
        }
        if (l < r - 1) {
            cache[substring.substr(l, r-1)] = lenDecrementRight;
        }
    }
    return cache[substring];
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
    map<string, int> cache;
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << solve(s, l-1, r, m, cache) << "\n";
    }
    return 0;
}
