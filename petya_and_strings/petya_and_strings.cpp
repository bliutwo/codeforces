#include <bits/stdc++.h>
#include <iostream>
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
    for (int i = 0; i < s.length(); i++) {
        char a = tolower(s[i]);
        char b = tolower(t[i]);
        if (a < b) {
            cout << "-1\n";
            return 0;
        } else if (a > b) {
            cout << "1\n";
            return 0;
        }
    }
    cout << "0\n";
    return 0;
}
