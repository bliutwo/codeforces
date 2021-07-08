#include <bits/stdc++.h>
using namespace std;

void create_cache(string& s, map<char, int>& m, vector<int>& cache) {
    for (size_t i = 0; i < s.length(); i++) {
        char c = s[i];
        cache[i+1] = m[c] + cache[i];
    }
}

int solve(string& s, int l, int r, map<char, int>& m, vector<int>& cache) {
    return cache[r] - cache[l-1];
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
    vector<int> cache(n+1, 0);
    create_cache(s, m, cache);
    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << solve(s, l, r, m, cache) << endl;
    }
    return 0;
}
