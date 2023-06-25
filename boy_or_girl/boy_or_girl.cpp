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
    string s;
    cin >> s;
    set<char> seen;
    for (size_t i = 0; i < s.size(); i++) {
        seen.insert(s[i]);
    }
    if (seen.size() % 2 == 0) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}
