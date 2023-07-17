#include <bits/stdc++.h>
using namespace std;

#define ll long long;


int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    string s, t;
    cin >> s >> t;
    size_t i = 0;
    size_t j = t.length() - 1;
    while (i < s.length() && j >= 0) {
        if (s[i] != t[j]) {
            cout << "NO\n";
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES\n";
    return 0;
}
