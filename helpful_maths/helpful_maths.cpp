#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long;

void solve(int n) {
}

int main() {
    // Make input and output more efficient.
    ios::sync_with_stdio(0);
    cin.tie(0);
    // Newline character is faster because endl always causes a flush operation.
    // cout << "Hello world!\n";
    // solution here
    string s;
    cin >> s;
    string toSort = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != '+') {
            toSort += s[i];
        }
    }
    sort(toSort.begin(), toSort.end());
    string ans = "";
    for (int i = 0; i < toSort.length(); i++) {
        ans += toSort[i];
        if (i < toSort.length() - 1) {
            ans += "+";
        }
    }
    cout << ans << "\n";
    return 0;
}
